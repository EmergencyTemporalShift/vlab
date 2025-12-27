/********************************************************************************
** Form generated from reading UI file 'Preferences.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Preferences
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *specTab;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *specPlainTextEdit;
    QWidget *configTab;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *configPlainTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Preferences)
    {
        if (Preferences->objectName().isEmpty())
            Preferences->setObjectName("Preferences");
        Preferences->resize(765, 415);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Preferences->sizePolicy().hasHeightForWidth());
        Preferences->setSizePolicy(sizePolicy);
        Preferences->setSizeGripEnabled(true);
        Preferences->setModal(false);
        gridLayout = new QGridLayout(Preferences);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(Preferences);
        tabWidget->setObjectName("tabWidget");
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        specTab = new QWidget();
        specTab->setObjectName("specTab");
        sizePolicy.setHeightForWidth(specTab->sizePolicy().hasHeightForWidth());
        specTab->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(specTab);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        specPlainTextEdit = new QPlainTextEdit(specTab);
        specPlainTextEdit->setObjectName("specPlainTextEdit");
        sizePolicy.setHeightForWidth(specPlainTextEdit->sizePolicy().hasHeightForWidth());
        specPlainTextEdit->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(specPlainTextEdit, 0, 0, 1, 1);

        tabWidget->addTab(specTab, QString());
        configTab = new QWidget();
        configTab->setObjectName("configTab");
        sizePolicy.setHeightForWidth(configTab->sizePolicy().hasHeightForWidth());
        configTab->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(configTab);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        configPlainTextEdit = new QPlainTextEdit(configTab);
        configPlainTextEdit->setObjectName("configPlainTextEdit");
        sizePolicy.setHeightForWidth(configPlainTextEdit->sizePolicy().hasHeightForWidth());
        configPlainTextEdit->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(configPlainTextEdit, 0, 0, 1, 1);

        tabWidget->addTab(configTab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Preferences);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(Preferences);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Preferences, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Preferences, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Preferences);
    } // setupUi

    void retranslateUi(QDialog *Preferences)
    {
        Preferences->setWindowTitle(QCoreApplication::translate("Preferences", "Dialog", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(specTab), QCoreApplication::translate("Preferences", "Specification", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(configTab), QCoreApplication::translate("Preferences", "Configuration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Preferences: public Ui_Preferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
