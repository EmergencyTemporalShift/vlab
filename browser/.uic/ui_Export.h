/********************************************************************************
** Form generated from reading UI file 'Export.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORT_H
#define UI_EXPORT_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Export
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *directory_2;
    QPushButton *chooseDirectory_5;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_4;
    QComboBox *comboBox_4;
    QLabel *label_3;
    QLabel *label;
    QTextEdit *textEdit;
    QComboBox *comboBox;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QDialogButtonBox *buttonBox_2;

    void setupUi(QDialog *Export)
    {
        if (Export->objectName().isEmpty())
            Export->setObjectName("Export");
        Export->resize(545, 294);
        verticalLayout_3 = new QVBoxLayout(Export);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(Export);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        directory_2 = new QComboBox(Export);
        directory_2->setObjectName("directory_2");
        directory_2->setEditable(true);

        horizontalLayout_5->addWidget(directory_2);

        chooseDirectory_5 = new QPushButton(Export);
        chooseDirectory_5->setObjectName("chooseDirectory_5");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chooseDirectory_5->sizePolicy().hasHeightForWidth());
        chooseDirectory_5->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(chooseDirectory_5);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        comboBox_4 = new QComboBox(Export);
        comboBox_4->setObjectName("comboBox_4");

        gridLayout_4->addWidget(comboBox_4, 5, 0, 1, 1);

        label_3 = new QLabel(Export);
        label_3->setObjectName("label_3");

        gridLayout_4->addWidget(label_3, 4, 0, 1, 1);

        label = new QLabel(Export);
        label->setObjectName("label");

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        textEdit = new QTextEdit(Export);
        textEdit->setObjectName("textEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        textEdit->setMaximumSize(QSize(16777215, 26));

        gridLayout_4->addWidget(textEdit, 2, 0, 1, 1);

        comboBox = new QComboBox(Export);
        comboBox->setObjectName("comboBox");

        gridLayout_4->addWidget(comboBox, 5, 1, 1, 1);

        label_6 = new QLabel(Export);
        label_6->setObjectName("label_6");

        gridLayout_4->addWidget(label_6, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 1, 1, 1);

        checkBox_2 = new QCheckBox(Export);
        checkBox_2->setObjectName("checkBox_2");

        gridLayout_4->addWidget(checkBox_2, 3, 1, 1, 1);

        checkBox = new QCheckBox(Export);
        checkBox->setObjectName("checkBox");
        checkBox->setChecked(true);

        gridLayout_4->addWidget(checkBox, 3, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);

        buttonBox_2 = new QDialogButtonBox(Export);
        buttonBox_2->setObjectName("buttonBox_2");
        buttonBox_2->setOrientation(Qt::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox_2);


        retranslateUi(Export);
        QObject::connect(buttonBox_2, &QDialogButtonBox::rejected, Export, qOverload<>(&QDialog::reject));
        QObject::connect(chooseDirectory_5, SIGNAL(clicked()), Export, SLOT(browse()));
        QObject::connect(buttonBox_2, SIGNAL(accepted()), Export, SLOT(ok()));

        comboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Export);
    } // setupUi

    void retranslateUi(QDialog *Export)
    {
        Export->setWindowTitle(QCoreApplication::translate("Export", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Export", "Target Directory:", nullptr));
        chooseDirectory_5->setText(QCoreApplication::translate("Export", "...", nullptr));
        label_3->setText(QCoreApplication::translate("Export", "Format:", nullptr));
        label->setText(QCoreApplication::translate("Export", "Name:", nullptr));
        label_6->setText(QCoreApplication::translate("Export", "Archive Type:", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Export", "Export hyperlinks as objects", nullptr));
        checkBox->setText(QCoreApplication::translate("Export", "Export subtree", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Export: public Ui_Export {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORT_H
