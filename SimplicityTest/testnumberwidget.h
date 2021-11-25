#ifndef TESTNUMBERWIDGET_H
#define TESTNUMBERWIDGET_H

#include <QWidget>

#include "SimplicityTest.h"

namespace Ui {
class TestNumberWidget;
}

class TestNumberWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TestNumberWidget(QWidget *parent = nullptr);
    ~TestNumberWidget();

private:
    Ui::TestNumberWidget *ui;
    SimplicityTest::LemannSimplicityTest test;

public slots:
    void slotCheckNumberButtonClick();
    void slotBrowsButtonClick();
};

#endif // TESTNUMBERWIDGET_H
