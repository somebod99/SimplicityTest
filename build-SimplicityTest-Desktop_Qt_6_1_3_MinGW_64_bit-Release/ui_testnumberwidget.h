/********************************************************************************
** Form generated from reading UI file 'testnumberwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTNUMBERWIDGET_H
#define UI_TESTNUMBERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestNumberWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *inputDataWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *labelsHL;
    QLabel *numberLabel;
    QLabel *probOfErrorLabel;
    QHBoxLayout *lineEditsHL;
    QLineEdit *numberLineEdit;
    QLineEdit *probOfErrorLineEdit;
    QPushButton *browsPushButton;
    QVBoxLayout *resultsVL;
    QLabel *runtimeLabel;
    QLabel *countIterLabel;
    QLabel *resultLabel;
    QPushButton *checkNumberPushButton;

    void setupUi(QWidget *TestNumberWidget)
    {
        if (TestNumberWidget->objectName().isEmpty())
            TestNumberWidget->setObjectName(QString::fromUtf8("TestNumberWidget"));
        TestNumberWidget->resize(800, 400);
        TestNumberWidget->setMinimumSize(QSize(800, 400));
        TestNumberWidget->setMaximumSize(QSize(800, 400));
        verticalLayout_3 = new QVBoxLayout(TestNumberWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        inputDataWidget = new QWidget(TestNumberWidget);
        inputDataWidget->setObjectName(QString::fromUtf8("inputDataWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inputDataWidget->sizePolicy().hasHeightForWidth());
        inputDataWidget->setSizePolicy(sizePolicy);
        inputDataWidget->setMaximumSize(QSize(16777215, 130));
        verticalLayout = new QVBoxLayout(inputDataWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelsHL = new QHBoxLayout();
        labelsHL->setObjectName(QString::fromUtf8("labelsHL"));
        numberLabel = new QLabel(inputDataWidget);
        numberLabel->setObjectName(QString::fromUtf8("numberLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(numberLabel->sizePolicy().hasHeightForWidth());
        numberLabel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(14);
        numberLabel->setFont(font);
        numberLabel->setAlignment(Qt::AlignCenter);

        labelsHL->addWidget(numberLabel);

        probOfErrorLabel = new QLabel(inputDataWidget);
        probOfErrorLabel->setObjectName(QString::fromUtf8("probOfErrorLabel"));
        sizePolicy1.setHeightForWidth(probOfErrorLabel->sizePolicy().hasHeightForWidth());
        probOfErrorLabel->setSizePolicy(sizePolicy1);
        probOfErrorLabel->setFont(font);
        probOfErrorLabel->setAlignment(Qt::AlignCenter);

        labelsHL->addWidget(probOfErrorLabel);


        verticalLayout->addLayout(labelsHL);

        lineEditsHL = new QHBoxLayout();
        lineEditsHL->setObjectName(QString::fromUtf8("lineEditsHL"));
        numberLineEdit = new QLineEdit(inputDataWidget);
        numberLineEdit->setObjectName(QString::fromUtf8("numberLineEdit"));
        QFont font1;
        font1.setPointSize(12);
        numberLineEdit->setFont(font1);

        lineEditsHL->addWidget(numberLineEdit);

        probOfErrorLineEdit = new QLineEdit(inputDataWidget);
        probOfErrorLineEdit->setObjectName(QString::fromUtf8("probOfErrorLineEdit"));
        probOfErrorLineEdit->setFont(font1);

        lineEditsHL->addWidget(probOfErrorLineEdit);


        verticalLayout->addLayout(lineEditsHL);

        browsPushButton = new QPushButton(inputDataWidget);
        browsPushButton->setObjectName(QString::fromUtf8("browsPushButton"));
        browsPushButton->setMaximumSize(QSize(100, 16777215));
        QFont font2;
        font2.setPointSize(10);
        browsPushButton->setFont(font2);

        verticalLayout->addWidget(browsPushButton);


        verticalLayout_3->addWidget(inputDataWidget);

        resultsVL = new QVBoxLayout();
        resultsVL->setObjectName(QString::fromUtf8("resultsVL"));
        runtimeLabel = new QLabel(TestNumberWidget);
        runtimeLabel->setObjectName(QString::fromUtf8("runtimeLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(runtimeLabel->sizePolicy().hasHeightForWidth());
        runtimeLabel->setSizePolicy(sizePolicy2);
        runtimeLabel->setMaximumSize(QSize(16777215, 50));
        runtimeLabel->setFont(font);
        runtimeLabel->setAlignment(Qt::AlignCenter);

        resultsVL->addWidget(runtimeLabel);

        countIterLabel = new QLabel(TestNumberWidget);
        countIterLabel->setObjectName(QString::fromUtf8("countIterLabel"));
        sizePolicy2.setHeightForWidth(countIterLabel->sizePolicy().hasHeightForWidth());
        countIterLabel->setSizePolicy(sizePolicy2);
        countIterLabel->setMaximumSize(QSize(16777215, 50));
        countIterLabel->setFont(font);
        countIterLabel->setAlignment(Qt::AlignCenter);

        resultsVL->addWidget(countIterLabel);

        resultLabel = new QLabel(TestNumberWidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        sizePolicy2.setHeightForWidth(resultLabel->sizePolicy().hasHeightForWidth());
        resultLabel->setSizePolicy(sizePolicy2);
        resultLabel->setMaximumSize(QSize(16777215, 50));
        resultLabel->setFont(font);
        resultLabel->setAlignment(Qt::AlignCenter);

        resultsVL->addWidget(resultLabel);

        checkNumberPushButton = new QPushButton(TestNumberWidget);
        checkNumberPushButton->setObjectName(QString::fromUtf8("checkNumberPushButton"));
        QFont font3;
        font3.setPointSize(18);
        checkNumberPushButton->setFont(font3);

        resultsVL->addWidget(checkNumberPushButton);


        verticalLayout_3->addLayout(resultsVL);


        retranslateUi(TestNumberWidget);

        QMetaObject::connectSlotsByName(TestNumberWidget);
    } // setupUi

    void retranslateUi(QWidget *TestNumberWidget)
    {
        TestNumberWidget->setWindowTitle(QCoreApplication::translate("TestNumberWidget", "Testing number", nullptr));
        numberLabel->setText(QCoreApplication::translate("TestNumberWidget", "Number", nullptr));
        probOfErrorLabel->setText(QCoreApplication::translate("TestNumberWidget", "Probability of error", nullptr));
        browsPushButton->setText(QCoreApplication::translate("TestNumberWidget", "Brows", nullptr));
        runtimeLabel->setText(QString());
        countIterLabel->setText(QString());
        resultLabel->setText(QString());
        checkNumberPushButton->setText(QCoreApplication::translate("TestNumberWidget", "Check the number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestNumberWidget: public Ui_TestNumberWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTNUMBERWIDGET_H
