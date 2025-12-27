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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Preferences
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Preferences)
    {
        if (Preferences->objectName().isEmpty())
            Preferences->setObjectName("Preferences");
        Preferences->resize(766, 455);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Preferences->sizePolicy().hasHeightForWidth());
        Preferences->setSizePolicy(sizePolicy);
        Preferences->setSizeGripEnabled(true);
        Preferences->setModal(false);
        verticalLayout = new QVBoxLayout(Preferences);
        verticalLayout->setObjectName("verticalLayout");
        plainTextEdit = new QPlainTextEdit(Preferences);
        plainTextEdit->setObjectName("plainTextEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(plainTextEdit);

        buttonBox = new QDialogButtonBox(Preferences);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Preferences);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Preferences, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Preferences, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Preferences);
    } // setupUi

    void retranslateUi(QDialog *Preferences)
    {
        Preferences->setWindowTitle(QCoreApplication::translate("Preferences", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Preferences: public Ui_Preferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
