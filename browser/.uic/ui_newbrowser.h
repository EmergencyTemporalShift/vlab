/********************************************************************************
** Form generated from reading UI file 'newbrowser.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWBROWSER_H
#define UI_NEWBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewBrowser
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *oofsType;
    QWidget *localOofs;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *directory;
    QPushButton *chooseDirectory;
    QSpacerItem *verticalSpacer;
    QWidget *remoteOofs;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *hostName;
    QLabel *label_3;
    QLineEdit *remoteDirectory;
    QCheckBox *hasLogin;
    QLineEdit *loginName;
    QCheckBox *hasPassword;
    QLineEdit *password;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *recentOofs;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewBrowser)
    {
        if (NewBrowser->objectName().isEmpty())
            NewBrowser->setObjectName("NewBrowser");
        NewBrowser->resize(487, 333);
        verticalLayout = new QVBoxLayout(NewBrowser);
        verticalLayout->setObjectName("verticalLayout");
        oofsType = new QTabWidget(NewBrowser);
        oofsType->setObjectName("oofsType");
        localOofs = new QWidget();
        localOofs->setObjectName("localOofs");
        verticalLayout_2 = new QVBoxLayout(localOofs);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(localOofs);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        directory = new QLineEdit(localOofs);
        directory->setObjectName("directory");

        horizontalLayout->addWidget(directory);

        chooseDirectory = new QPushButton(localOofs);
        chooseDirectory->setObjectName("chooseDirectory");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chooseDirectory->sizePolicy().hasHeightForWidth());
        chooseDirectory->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(chooseDirectory);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 124, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        oofsType->addTab(localOofs, QString());
        remoteOofs = new QWidget();
        remoteOofs->setObjectName("remoteOofs");
        gridLayout = new QGridLayout(remoteOofs);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(remoteOofs);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        hostName = new QLineEdit(remoteOofs);
        hostName->setObjectName("hostName");

        gridLayout->addWidget(hostName, 0, 1, 1, 1);

        label_3 = new QLabel(remoteOofs);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        remoteDirectory = new QLineEdit(remoteOofs);
        remoteDirectory->setObjectName("remoteDirectory");

        gridLayout->addWidget(remoteDirectory, 1, 1, 1, 1);

        hasLogin = new QCheckBox(remoteOofs);
        hasLogin->setObjectName("hasLogin");

        gridLayout->addWidget(hasLogin, 2, 0, 1, 1);

        loginName = new QLineEdit(remoteOofs);
        loginName->setObjectName("loginName");
        loginName->setEnabled(false);

        gridLayout->addWidget(loginName, 2, 1, 1, 1);

        hasPassword = new QCheckBox(remoteOofs);
        hasPassword->setObjectName("hasPassword");

        gridLayout->addWidget(hasPassword, 3, 0, 1, 1);

        password = new QLineEdit(remoteOofs);
        password->setObjectName("password");
        password->setEnabled(false);
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 3, 1, 1, 1);

        oofsType->addTab(remoteOofs, QString());

        verticalLayout->addWidget(oofsType);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(NewBrowser);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        recentOofs = new QComboBox(NewBrowser);
        recentOofs->setObjectName("recentOofs");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(recentOofs->sizePolicy().hasHeightForWidth());
        recentOofs->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(recentOofs);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(NewBrowser);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Open|QDialogButtonBox::RestoreDefaults);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NewBrowser);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NewBrowser, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NewBrowser, qOverload<>(&QDialog::reject));
        QObject::connect(hasLogin, &QCheckBox::toggled, loginName, &QLineEdit::setEnabled);
        QObject::connect(hasPassword, &QCheckBox::toggled, password, &QLineEdit::setEnabled);

        oofsType->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NewBrowser);
    } // setupUi

    void retranslateUi(QDialog *NewBrowser)
    {
        NewBrowser->setWindowTitle(QCoreApplication::translate("NewBrowser", "New browser", nullptr));
        label->setText(QCoreApplication::translate("NewBrowser", "Directory:", nullptr));
        chooseDirectory->setText(QCoreApplication::translate("NewBrowser", "...", nullptr));
        oofsType->setTabText(oofsType->indexOf(localOofs), QCoreApplication::translate("NewBrowser", "Local", nullptr));
        label_2->setText(QCoreApplication::translate("NewBrowser", "Host", nullptr));
        label_3->setText(QCoreApplication::translate("NewBrowser", "Directory", nullptr));
        hasLogin->setText(QCoreApplication::translate("NewBrowser", "Login", nullptr));
        hasPassword->setText(QCoreApplication::translate("NewBrowser", "Password", nullptr));
        oofsType->setTabText(oofsType->indexOf(remoteOofs), QCoreApplication::translate("NewBrowser", "Remote", nullptr));
        label_4->setText(QCoreApplication::translate("NewBrowser", "Recent OOFS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewBrowser: public Ui_NewBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWBROWSER_H
