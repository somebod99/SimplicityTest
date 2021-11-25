#ifndef GENPRIMENUMBERWIDGET_H
#define GENPRIMENUMBERWIDGET_H

#include <QWidget>

#include "SimplicityTest.h"

namespace Ui {
class GenPrimeNumberWidget;
}

class GenPrimeNumberWidget : public QWidget
{
    Q_OBJECT

public:
    explicit GenPrimeNumberWidget(QWidget *parent = nullptr);
    ~GenPrimeNumberWidget();

private:
    Ui::GenPrimeNumberWidget *ui;
    SimplicityTest::LemannSimplicityTest test;

public slots:
    void slotGenButtonClick();
    void slotSaveNumberButtonClick();
};

#endif // GENPRIMENUMBERWIDGET_H
