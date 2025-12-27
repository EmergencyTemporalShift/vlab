/********************************************************************************
** Form generated from reading UI file 'FindDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDDIALOG_H
#define UI_FINDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UI_FindDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *textLabel1;
    QLineEdit *findLine;
    QHBoxLayout *hboxLayout;
    QCheckBox *caseCheckBox;
    QCheckBox *exactCheckBox;
    QSpacerItem *spacer3;
    QFrame *line1;
    QHBoxLayout *hboxLayout1;
    QPushButton *startButton;
    QSpacerItem *spacer1;
    QPushButton *previousButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *nextButton;
    QSpacerItem *spacer2;
    QPushButton *quitButton;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *UI_FindDialog)
    {
        if (UI_FindDialog->objectName().isEmpty())
            UI_FindDialog->setObjectName("UI_FindDialog");
        UI_FindDialog->resize(440, 163);
        verticalLayout = new QVBoxLayout(UI_FindDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        textLabel1 = new QLabel(UI_FindDialog);
        textLabel1->setObjectName("textLabel1");
        textLabel1->setWordWrap(false);

        verticalLayout->addWidget(textLabel1);

        findLine = new QLineEdit(UI_FindDialog);
        findLine->setObjectName("findLine");

        verticalLayout->addWidget(findLine);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        caseCheckBox = new QCheckBox(UI_FindDialog);
        caseCheckBox->setObjectName("caseCheckBox");

        hboxLayout->addWidget(caseCheckBox);

        exactCheckBox = new QCheckBox(UI_FindDialog);
        exactCheckBox->setObjectName("exactCheckBox");

        hboxLayout->addWidget(exactCheckBox);

        spacer3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(spacer3);


        verticalLayout->addLayout(hboxLayout);

        line1 = new QFrame(UI_FindDialog);
        line1->setObjectName("line1");
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName("hboxLayout1");
        startButton = new QPushButton(UI_FindDialog);
        buttonGroup = new QButtonGroup(UI_FindDialog);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(startButton);
        startButton->setObjectName("startButton");
        startButton->setAutoDefault(false);

        hboxLayout1->addWidget(startButton);

        spacer1 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout1->addItem(spacer1);

        previousButton = new QPushButton(UI_FindDialog);
        buttonGroup->addButton(previousButton);
        previousButton->setObjectName("previousButton");
        previousButton->setAutoDefault(false);

        hboxLayout1->addWidget(previousButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout1->addItem(horizontalSpacer_2);

        nextButton = new QPushButton(UI_FindDialog);
        buttonGroup->addButton(nextButton);
        nextButton->setObjectName("nextButton");
        nextButton->setAutoDefault(false);

        hboxLayout1->addWidget(nextButton);

        spacer2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout1->addItem(spacer2);

        quitButton = new QPushButton(UI_FindDialog);
        buttonGroup->addButton(quitButton);
        quitButton->setObjectName("quitButton");
        quitButton->setMouseTracking(false);
        quitButton->setAutoExclusive(true);
        quitButton->setAutoDefault(false);

        hboxLayout1->addWidget(quitButton);


        verticalLayout->addLayout(hboxLayout1);


        retranslateUi(UI_FindDialog);

        QMetaObject::connectSlotsByName(UI_FindDialog);
    } // setupUi

    void retranslateUi(QDialog *UI_FindDialog)
    {
        UI_FindDialog->setWindowTitle(QCoreApplication::translate("UI_FindDialog", "Find", nullptr));
        textLabel1->setText(QCoreApplication::translate("UI_FindDialog", "Selection:", nullptr));
#if QT_CONFIG(tooltip)
        caseCheckBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        caseCheckBox->setText(QCoreApplication::translate("UI_FindDialog", "Case-sensitive", nullptr));
        exactCheckBox->setText(QCoreApplication::translate("UI_FindDialog", "Exact match", nullptr));
        startButton->setText(QCoreApplication::translate("UI_FindDialog", "Start", nullptr));
        previousButton->setText(QCoreApplication::translate("UI_FindDialog", "Previous", nullptr));
        nextButton->setText(QCoreApplication::translate("UI_FindDialog", "Next", nullptr));
        quitButton->setText(QCoreApplication::translate("UI_FindDialog", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UI_FindDialog: public Ui_UI_FindDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDDIALOG_H
