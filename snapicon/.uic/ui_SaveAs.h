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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveAs
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *directory;
    QPushButton *chooseDirectory;
    QLabel *name;
    QTextEdit *lineEdit;
    QLabel *label_4;
    QComboBox *comboBox;

    void setupUi(QDialog *SaveAs)
    {
        if (SaveAs->objectName().isEmpty())
            SaveAs->setObjectName("SaveAs");
        SaveAs->resize(582, 192);
        buttonBox = new QDialogButtonBox(SaveAs);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(400, 140, 164, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(SaveAs);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(14, 12, 541, 111));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        directory = new QComboBox(widget);
        directory->setObjectName("directory");
        directory->setEditable(true);

        gridLayout->addWidget(directory, 0, 1, 1, 1);

        chooseDirectory = new QPushButton(widget);
        chooseDirectory->setObjectName("chooseDirectory");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chooseDirectory->sizePolicy().hasHeightForWidth());
        chooseDirectory->setSizePolicy(sizePolicy);

        gridLayout->addWidget(chooseDirectory, 0, 2, 1, 1);

        name = new QLabel(widget);
        name->setObjectName("name");

        gridLayout->addWidget(name, 1, 0, 1, 1);

        lineEdit = new QTextEdit(widget);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMaximumSize(QSize(16777215, 26));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 2, 1, 1, 1);


        retranslateUi(SaveAs);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SaveAs, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SaveAs, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SaveAs);
    } // setupUi

    void retranslateUi(QDialog *SaveAs)
    {
        SaveAs->setWindowTitle(QCoreApplication::translate("SaveAs", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("SaveAs", "Target Directory:", nullptr));
        chooseDirectory->setText(QCoreApplication::translate("SaveAs", "...", nullptr));
        name->setText(QCoreApplication::translate("SaveAs", "Name:", nullptr));
        label_4->setText(QCoreApplication::translate("SaveAs", "Format:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveAs: public Ui_SaveAs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEAS_H
