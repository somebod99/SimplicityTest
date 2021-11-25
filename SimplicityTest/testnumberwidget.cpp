#include "testnumberwidget.h"
#include "ui_testnumberwidget.h"

#include <chrono>

#include <QMessageBox>
#include <QFileDialog>
#include <QFile>

TestNumberWidget::TestNumberWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestNumberWidget)
{
    ui->setupUi(this);

    ui->runtimeLabel->setVisible(false);
    ui->countIterLabel->setVisible(false);
    ui->resultLabel->setVisible(false);

    connect(ui->checkNumberPushButton, SIGNAL(clicked()), this, SLOT(slotCheckNumberButtonClick()));
    connect(ui->browsPushButton, SIGNAL(clicked()), this, SLOT(slotBrowsButtonClick()));
}

TestNumberWidget::~TestNumberWidget()
{
    delete ui;
}

void TestNumberWidget::slotCheckNumberButtonClick()
{
    try
    {
        bool error = false;

        if(ui->numberLineEdit->text() == "")
            error = true;
        if(ui->probOfErrorLineEdit->text() == "")
            error = true;

        if(error)
            throw "Error: enter all forms";

        QString number;

        if(ui->numberLineEdit->text().indexOf(".txt", 0) != -1)
        {
            QFile file(ui->numberLineEdit->text());

            if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
                throw "Error: cannot open file";

            number = file.readAll();

            file.close();
        }
        else
        {
            for(const auto& symbol : ui->numberLineEdit->text().toStdString())
            {
                if(!isdigit(symbol))
                    throw "Error: incorrect capacity";
            }

            number = ui->numberLineEdit->text();
        }

        double prob_of_error = ui->probOfErrorLineEdit->text().toDouble();

        if(prob_of_error <= 0.0 || prob_of_error > 1.0)
            throw "Error: incorrect probability of error";

        boost::multiprecision::cpp_int checking_number(number.toStdString());

        auto start = std::chrono::steady_clock::now();
        bool is_prime = this->test.SimplicityTest(checking_number, prob_of_error);
        auto dur = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start);

        QString res;

        if(is_prime)
            res = "number is prime";
        else
            res = "number is composite";

        unsigned int count_iter = (unsigned int)(-log2(prob_of_error)) + 1;

        QString runtime = "Runtime: " + QString::number((dur.count() / 60000) % 60) + ":" + QString::number((dur.count() / 1000) % 60) + ":" + QString::number(dur.count() % 1000);

        ui->runtimeLabel->setText(runtime);
        ui->countIterLabel->setText("Count of iterations: " + QString::number(count_iter));
        ui->resultLabel->setText("Result: " + res);

        ui->runtimeLabel->setVisible(true);
        ui->countIterLabel->setVisible(true);
        ui->resultLabel->setVisible(true);

        QMessageBox::information(this, "Info", "number successfully checked for simplicity");
    }
    catch (const char* err)
    {
        QMessageBox::critical(this, "ERROR", err);
    }

}

void TestNumberWidget::slotBrowsButtonClick()
{
    ui->numberLineEdit->setText(QFileDialog::getOpenFileName(this, "Files"));
}
