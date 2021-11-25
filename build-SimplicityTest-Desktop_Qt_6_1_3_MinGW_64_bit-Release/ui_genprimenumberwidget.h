/********************************************************************************
** Form generated from reading UI file 'genprimenumberwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENPRIMENUMBERWIDGET_H
#define UI_GENPRIMENUMBERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GenPrimeNumberWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *inputDataWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *labelsHL;
    QLabel *capacityLabel;
    QLabel *probOfErrorLabel;
    QHBoxLayout *lineEditsHL;
    QLineEdit *capacityLineEdit;
    QLineEdit *probOfErrorLineEdit;
    QVBoxLayout *resLabelsVL;
    QLabel *runtimeLabel;
    QLabel *countIterLabel;
    QLabel *genNumberLabel;
    QTextBrowser *genNumberTextBrowser;
    QPushButton *saveNumberPushButton;
    QPushButton *genPushButton;

    void setupUi(QWidget *GenPrimeNumberWidget)
    {
        if (GenPrimeNumberWidget->objectName().isEmpty())
            GenPrimeNumberWidget->setObjectName(QString::fromUtf8("GenPrimeNumberWidget"));
        GenPrimeNumberWidget->resize(700, 500);
        GenPrimeNumberWidget->setMinimumSize(QSize(700, 500));
        verticalLayout_2 = new QVBoxLayout(GenPrimeNumberWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        inputDataWidget = new QWidget(GenPrimeNumberWidget);
        inputDataWidget->setObjectName(QString::fromUtf8("inputDataWidget"));
        verticalLayout = new QVBoxLayout(inputDataWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelsHL = new QHBoxLayout();
        labelsHL->setObjectName(QString::fromUtf8("labelsHL"));
        capacityLabel = new QLabel(inputDataWidget);
        capacityLabel->setObjectName(QString::fromUtf8("capacityLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(capacityLabel->sizePolicy().hasHeightForWidth());
        capacityLabel->setSizePolicy(sizePolicy);
        capacityLabel->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(14);
        capacityLabel->setFont(font);
        capacityLabel->setAlignment(Qt::AlignCenter);

        labelsHL->addWidget(capacityLabel);

        probOfErrorLabel = new QLabel(inputDataWidget);
        probOfErrorLabel->setObjectName(QString::fromUtf8("probOfErrorLabel"));
        sizePolicy.setHeightForWidth(probOfErrorLabel->sizePolicy().hasHeightForWidth());
        probOfErrorLabel->setSizePolicy(sizePolicy);
        probOfErrorLabel->setFont(font);
        probOfErrorLabel->setAlignment(Qt::AlignCenter);

        labelsHL->addWidget(probOfErrorLabel);


        verticalLayout->addLayout(labelsHL);

        lineEditsHL = new QHBoxLayout();
        lineEditsHL->setObjectName(QString::fromUtf8("lineEditsHL"));
        capacityLineEdit = new QLineEdit(inputDataWidget);
        capacityLineEdit->setObjectName(QString::fromUtf8("capacityLineEdit"));
        QFont font1;
        font1.setPointSize(12);
        capacityLineEdit->setFont(font1);

        lineEditsHL->addWidget(capacityLineEdit);

        probOfErrorLineEdit = new QLineEdit(inputDataWidget);
        probOfErrorLineEdit->setObjectName(QString::fromUtf8("probOfErrorLineEdit"));
        probOfErrorLineEdit->setFont(font1);

        lineEditsHL->addWidget(probOfErrorLineEdit);


        verticalLayout->addLayout(lineEditsHL);

        resLabelsVL = new QVBoxLayout();
        resLabelsVL->setObjectName(QString::fromUtf8("resLabelsVL"));
        runtimeLabel = new QLabel(inputDataWidget);
        runtimeLabel->setObjectName(QString::fromUtf8("runtimeLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(runtimeLabel->sizePolicy().hasHeightForWidth());
        runtimeLabel->setSizePolicy(sizePolicy1);
        runtimeLabel->setFont(font);
        runtimeLabel->setAlignment(Qt::AlignCenter);

        resLabelsVL->addWidget(runtimeLabel);

        countIterLabel = new QLabel(inputDataWidget);
        countIterLabel->setObjectName(QString::fromUtf8("countIterLabel"));
        sizePolicy1.setHeightForWidth(countIterLabel->sizePolicy().hasHeightForWidth());
        countIterLabel->setSizePolicy(sizePolicy1);
        countIterLabel->setFont(font);
        countIterLabel->setAlignment(Qt::AlignCenter);

        resLabelsVL->addWidget(countIterLabel);

        genNumberLabel = new QLabel(inputDataWidget);
        genNumberLabel->setObjectName(QString::fromUtf8("genNumberLabel"));
        genNumberLabel->setMaximumSize(QSize(250, 16777215));
        genNumberLabel->setFont(font);

        resLabelsVL->addWidget(genNumberLabel);

        genNumberTextBrowser = new QTextBrowser(inputDataWidget);
        genNumberTextBrowser->setObjectName(QString::fromUtf8("genNumberTextBrowser"));
        genNumberTextBrowser->setFont(font1);

        resLabelsVL->addWidget(genNumberTextBrowser);

        saveNumberPushButton = new QPushButton(inputDataWidget);
        saveNumberPushButton->setObjectName(QString::fromUtf8("saveNumberPushButton"));
        saveNumberPushButton->setMaximumSize(QSize(150, 16777215));
        saveNumberPushButton->setFont(font);

        resLabelsVL->addWidget(saveNumberPushButton);

        genPushButton = new QPushButton(inputDataWidget);
        genPushButton->setObjectName(QString::fromUtf8("genPushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(genPushButton->sizePolicy().hasHeightForWidth());
        genPushButton->setSizePolicy(sizePolicy2);
        genPushButton->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setPointSize(18);
        genPushButton->setFont(font2);

        resLabelsVL->addWidget(genPushButton);


        verticalLayout->addLayout(resLabelsVL);


        verticalLayout_2->addWidget(inputDataWidget);


        retranslateUi(GenPrimeNumberWidget);

        QMetaObject::connectSlotsByName(GenPrimeNumberWidget);
    } // setupUi

    void retranslateUi(QWidget *GenPrimeNumberWidget)
    {
        GenPrimeNumberWidget->setWindowTitle(QCoreApplication::translate("GenPrimeNumberWidget", "Generating prime number", nullptr));
        capacityLabel->setText(QCoreApplication::translate("GenPrimeNumberWidget", "Capacity", nullptr));
        probOfErrorLabel->setText(QCoreApplication::translate("GenPrimeNumberWidget", "Probability of error", nullptr));
        runtimeLabel->setText(QString());
        countIterLabel->setText(QString());
        genNumberLabel->setText(QCoreApplication::translate("GenPrimeNumberWidget", "Generated number:", nullptr));
        saveNumberPushButton->setText(QCoreApplication::translate("GenPrimeNumberWidget", "Save number", nullptr));
        genPushButton->setText(QCoreApplication::translate("GenPrimeNumberWidget", "Generate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GenPrimeNumberWidget: public Ui_GenPrimeNumberWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENPRIMENUMBERWIDGET_H
