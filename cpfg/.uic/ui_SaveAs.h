/********************************************************************************
** Form generated from reading UI file 'SaveAs.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEAS_H
#define UI_SAVEAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SaveAs
{
public:
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *directory_2;
    QPushButton *chooseDirectory_5;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QTextEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *checkBox;
    QSpinBox *startNumber;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QCheckBox *checkBox_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SaveAs)
    {
        if (SaveAs->objectName().isEmpty())
            SaveAs->setObjectName("SaveAs");
        SaveAs->resize(472, 280);
        verticalLayout_6 = new QVBoxLayout(SaveAs);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_2 = new QLabel(SaveAs);
        label_2->setObjectName("label_2");

        verticalLayout_3->addWidget(label_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        directory_2 = new QComboBox(SaveAs);
        directory_2->setObjectName("directory_2");
        directory_2->setEditable(true);

        horizontalLayout_5->addWidget(directory_2);

        chooseDirectory_5 = new QPushButton(SaveAs);
        chooseDirectory_5->setObjectName("chooseDirectory_5");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chooseDirectory_5->sizePolicy().hasHeightForWidth());
        chooseDirectory_5->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(chooseDirectory_5);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_6->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label_5 = new QLabel(SaveAs);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        lineEdit = new QTextEdit(SaveAs);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMaximumSize(QSize(16777215, 26));

        verticalLayout_2->addWidget(lineEdit);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        checkBox = new QCheckBox(SaveAs);
        checkBox->setObjectName("checkBox");

        verticalLayout_7->addWidget(checkBox);

        startNumber = new QSpinBox(SaveAs);
        startNumber->setObjectName("startNumber");
        startNumber->setMaximum(999999);

        verticalLayout_7->addWidget(startNumber);


        horizontalLayout_2->addLayout(verticalLayout_7);


        verticalLayout_6->addLayout(horizontalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(SaveAs);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        comboBox = new QComboBox(SaveAs);
        comboBox->setObjectName("comboBox");

        verticalLayout->addWidget(comboBox);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(SaveAs);
        label_4->setObjectName("label_4");

        verticalLayout_4->addWidget(label_4);

        comboBox_2 = new QComboBox(SaveAs);
        comboBox_2->setObjectName("comboBox_2");

        verticalLayout_4->addWidget(comboBox_2);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_3);

        checkBox_2 = new QCheckBox(SaveAs);
        checkBox_2->setObjectName("checkBox_2");

        verticalLayout_5->addWidget(checkBox_2);


        verticalLayout_6->addLayout(verticalLayout_5);

        buttonBox = new QDialogButtonBox(SaveAs);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_6->addWidget(buttonBox);


        retranslateUi(SaveAs);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SaveAs, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SaveAs, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SaveAs);
    } // setupUi

    void retranslateUi(QDialog *SaveAs)
    {
        SaveAs->setWindowTitle(QCoreApplication::translate("SaveAs", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("SaveAs", "Target Directory:", nullptr));
        chooseDirectory_5->setText(QCoreApplication::translate("SaveAs", "...", nullptr));
        label_5->setText(QCoreApplication::translate("SaveAs", "Name:", nullptr));
        checkBox->setText(QCoreApplication::translate("SaveAs", "Numbering", nullptr));
        label_3->setText(QCoreApplication::translate("SaveAs", "Type:", nullptr));
        label_4->setText(QCoreApplication::translate("SaveAs", "Format:", nullptr));
        checkBox_2->setText(QCoreApplication::translate("SaveAs", "Alpha channel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveAs: public Ui_SaveAs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEAS_H
