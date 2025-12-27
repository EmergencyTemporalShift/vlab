/********************************************************************************
** Form generated from reading UI file 'UI_RALogin.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_RALOGIN_H
#define UI_UI_RALOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UI_RALogin
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *question_label;
    QGridLayout *gridLayout;
    QLineEdit *username_text;
    QLabel *textLabel1;
    QLineEdit *password_text;
    QLabel *textLabel1_2;
    QFrame *line1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UI_RALogin)
    {
        if (UI_RALogin->objectName().isEmpty())
            UI_RALogin->setObjectName("UI_RALogin");
        UI_RALogin->resize(251, 161);
        verticalLayout = new QVBoxLayout(UI_RALogin);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        question_label = new QLabel(UI_RALogin);
        question_label->setObjectName("question_label");
        question_label->setWordWrap(false);

        verticalLayout->addWidget(question_label);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        username_text = new QLineEdit(UI_RALogin);
        username_text->setObjectName("username_text");

        gridLayout->addWidget(username_text, 0, 1, 1, 1);

        textLabel1 = new QLabel(UI_RALogin);
        textLabel1->setObjectName("textLabel1");
        textLabel1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        password_text = new QLineEdit(UI_RALogin);
        password_text->setObjectName("password_text");
        password_text->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password_text, 1, 1, 1, 1);

        textLabel1_2 = new QLabel(UI_RALogin);
        textLabel1_2->setObjectName("textLabel1_2");
        textLabel1_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel1_2->setWordWrap(false);

        gridLayout->addWidget(textLabel1_2, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        line1 = new QFrame(UI_RALogin);
        line1->setObjectName("line1");
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line1);

        buttonBox = new QDialogButtonBox(UI_RALogin);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Abort|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(UI_RALogin);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, UI_RALogin, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, UI_RALogin, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(UI_RALogin);
    } // setupUi

    void retranslateUi(QDialog *UI_RALogin)
    {
        UI_RALogin->setWindowTitle(QCoreApplication::translate("UI_RALogin", "Vlab RA Login", nullptr));
        question_label->setText(QCoreApplication::translate("UI_RALogin", "Please enter your login information:", nullptr));
        textLabel1->setText(QCoreApplication::translate("UI_RALogin", "Username:", nullptr));
        textLabel1_2->setText(QCoreApplication::translate("UI_RALogin", "Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UI_RALogin: public Ui_UI_RALogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_RALOGIN_H
