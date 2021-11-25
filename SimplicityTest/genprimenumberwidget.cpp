#include "genprimenumberwidget.h"
#include "ui_genprimenumberwidget.h"

#include <chrono>

#include <QMessageBox>
#include <QFile>

GenPrimeNumberWidget::GenPrimeNumberWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GenPrimeNumberWidget)
{
    ui->setupUi(this);

    ui->runtimeLabel->setVisible(false);
    ui->countIterLabel->setVisible(false);
    ui->genNumberLabel->setVisible(false);

    connect(ui->genPushButton, SIGNAL(clicked()), this, SLOT(slotGenButtonClick()));
    connect(ui->saveNumberPushButton, SIGNAL(clicked()), this, SLOT(slotSaveNumberButtonClick()));
}

GenPrimeNumberWidget::~GenPrimeNumberWidget()
{
    delete ui;
}

void GenPrimeNumberWidget::slotGenButtonClick()
{
    try
    {
        bool error = false;

        if(ui->capacityLineEdit->text() == "")
            error = true;
        if(ui->probOfErrorLineEdit->text() == "")
            error = true;

        if(error)
            throw "Error: enter all forms";

        unsigned long capacity = ui->capacityLineEdit->text().toUInt();

        if(capacity <= 0)
            throw "Error: incorrect capacity";

        double prob_of_error = ui->probOfErrorLineEdit->text().toDouble();

        if(prob_of_error <= 0.0 || prob_of_error > 1.0)
            throw "Error: incorrect probability of error";

        unsigned long iter;

        auto start = std::chrono::steady_clock::now();
        boost::multiprecision::cpp_int res = SimplicityTest::GetRandomPrimeNumber(&(this->test), capacity, prob_of_error, iter);
        auto dur = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start);

        QString runtime = "Runtime: " + QString::number((dur.count() / 60000) % 60) + ":" + QString::number((dur.count() / 1000) % 60) + ":" + QString::number(dur.count() % 1000);
        ui->runtimeLabel->setText(runtime);
        ui->countIterLabel->setText("Count of iterations: " + QString::number(iter));

        ui->runtimeLabel->setVisible(true);
        ui->countIterLabel->setVisible(true);
        ui->genNumberLabel->setVisible(true);

        ui->genNumberTextBrowser->setText(QString::fromStdString(res.convert_to<std::string>()));

        QMessageBox::information(this, "Info", "number generated successfully");
    }
    catch (const char* err)
    {
        QMessageBox::critical(this, "ERROR", err);
    }

}

void GenPrimeNumberWidget::slotSaveNumberButtonClick()
{
    QFile file("gen_prime_number.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    file.write(ui->genNumberTextBrowser->toPlainText().toStdString().c_str());
    file.close();

    QMessageBox::information(this, "Info", "Number saved successfully");
}
