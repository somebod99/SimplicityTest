#include "genprimenumberwidget.h"
#include "testnumberwidget.h"

#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);

    connect(ui->genPushButton, SIGNAL(clicked()), this, SLOT(slotButtonClick()));
    connect(ui->testPushButton, SIGNAL(clicked()), this, SLOT(slotButtonClick()));
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::slotButtonClick()
{
    QWidget* widg;

    if(sender()->objectName() == "genPushButton")
    {
        widg = new GenPrimeNumberWidget();
    }
    else
    {
        widg = new TestNumberWidget();
    }

    widg->setWindowModality(Qt::ApplicationModal);
    widg->show();
}
