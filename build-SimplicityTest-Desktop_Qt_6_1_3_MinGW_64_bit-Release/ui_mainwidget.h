/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *testWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *genPushButton;
    QPushButton *testPushButton;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QString::fromUtf8("MainWidget"));
        MainWidget->resize(300, 300);
        MainWidget->setMinimumSize(QSize(200, 200));
        MainWidget->setMaximumSize(QSize(400, 400));
        gridLayout = new QGridLayout(MainWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        testWidget = new QWidget(MainWidget);
        testWidget->setObjectName(QString::fromUtf8("testWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(testWidget->sizePolicy().hasHeightForWidth());
        testWidget->setSizePolicy(sizePolicy);
        testWidget->setMinimumSize(QSize(0, 0));
        testWidget->setMaximumSize(QSize(400, 400));
        verticalLayout = new QVBoxLayout(testWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        genPushButton = new QPushButton(testWidget);
        genPushButton->setObjectName(QString::fromUtf8("genPushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(genPushButton->sizePolicy().hasHeightForWidth());
        genPushButton->setSizePolicy(sizePolicy1);
        genPushButton->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setPointSize(18);
        genPushButton->setFont(font);

        verticalLayout->addWidget(genPushButton);

        testPushButton = new QPushButton(testWidget);
        testPushButton->setObjectName(QString::fromUtf8("testPushButton"));
        sizePolicy1.setHeightForWidth(testPushButton->sizePolicy().hasHeightForWidth());
        testPushButton->setSizePolicy(sizePolicy1);
        testPushButton->setMaximumSize(QSize(16777215, 60));
        testPushButton->setFont(font);

        verticalLayout->addWidget(testPushButton);


        gridLayout->addWidget(testWidget, 0, 0, 1, 1);


        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "SimplicityTest", nullptr));
        genPushButton->setText(QCoreApplication::translate("MainWidget", "Generate", nullptr));
        testPushButton->setText(QCoreApplication::translate("MainWidget", "Simplicity test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
