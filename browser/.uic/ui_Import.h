/********************************************************************************
** Form generated from reading UI file 'Import.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORT_H
#define UI_IMPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Import
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *directory_2;
    QPushButton *chooseDirectory_5;
    QGridLayout *gridLayout_4;
    QComboBox *comboBox_4;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox_2;

    void setupUi(QDialog *Import)
    {
        if (Import->objectName().isEmpty())
            Import->setObjectName("Import");
        Import->resize(538, 209);
        verticalLayout_3 = new QVBoxLayout(Import);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(Import);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        directory_2 = new QComboBox(Import);
        directory_2->setObjectName("directory_2");
        directory_2->setEditable(true);

        horizontalLayout_5->addWidget(directory_2);

        chooseDirectory_5 = new QPushButton(Import);
        chooseDirectory_5->setObjectName("chooseDirectory_5");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chooseDirectory_5->sizePolicy().hasHeightForWidth());
        chooseDirectory_5->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(chooseDirectory_5);


        verticalLayout_2->addLayout(horizontalLayout_5);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        comboBox_4 = new QComboBox(Import);
        comboBox_4->setObjectName("comboBox_4");

        gridLayout_4->addWidget(comboBox_4, 2, 0, 1, 1);

        label_3 = new QLabel(Import);
        label_3->setObjectName("label_3");

        gridLayout_4->addWidget(label_3, 1, 0, 1, 1);

        comboBox = new QComboBox(Import);
        comboBox->setObjectName("comboBox");

        gridLayout_4->addWidget(comboBox, 2, 1, 1, 1);

        label_6 = new QLabel(Import);
        label_6->setObjectName("label_6");

        gridLayout_4->addWidget(label_6, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);

        buttonBox_2 = new QDialogButtonBox(Import);
        buttonBox_2->setObjectName("buttonBox_2");
        buttonBox_2->setOrientation(Qt::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox_2);


        retranslateUi(Import);
        QObject::connect(buttonBox_2, &QDialogButtonBox::rejected, Import, qOverload<>(&QDialog::reject));
        QObject::connect(chooseDirectory_5, SIGNAL(clicked()), Import, SLOT(browse()));
        QObject::connect(buttonBox_2, SIGNAL(accepted()), Import, SLOT(ok()));

        comboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Import);
    } // setupUi

    void retranslateUi(QDialog *Import)
    {
        Import->setWindowTitle(QCoreApplication::translate("Import", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Import", "Source File:", nullptr));
        chooseDirectory_5->setText(QCoreApplication::translate("Import", "...", nullptr));
        label_3->setText(QCoreApplication::translate("Import", "Format:", nullptr));
        label_6->setText(QCoreApplication::translate("Import", "Archive Type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Import: public Ui_Import {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORT_H
