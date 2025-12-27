/********************************************************************************
** Form generated from reading UI file 'ImportExport.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTEXPORT_H
#define UI_IMPORTEXPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImportExport
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *directory_2;
    QPushButton *chooseDirectory_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox_2;

    void setupUi(QDialog *ImportExport)
    {
        if (ImportExport->objectName().isEmpty())
            ImportExport->setObjectName("ImportExport");
        ImportExport->resize(548, 292);
        verticalLayout = new QVBoxLayout(ImportExport);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_2 = new QLabel(ImportExport);
        label_2->setObjectName("label_2");

        verticalLayout_4->addWidget(label_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        directory_2 = new QComboBox(ImportExport);
        directory_2->setObjectName("directory_2");
        directory_2->setEditable(true);

        horizontalLayout_5->addWidget(directory_2);

        chooseDirectory_5 = new QPushButton(ImportExport);
        chooseDirectory_5->setObjectName("chooseDirectory_5");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chooseDirectory_5->sizePolicy().hasHeightForWidth());
        chooseDirectory_5->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(chooseDirectory_5);


        verticalLayout_4->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(verticalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label = new QLabel(ImportExport);
        label->setObjectName("label");

        verticalLayout_5->addWidget(label);

        textEdit = new QTextEdit(ImportExport);
        textEdit->setObjectName("textEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        textEdit->setMaximumSize(QSize(16777215, 26));

        verticalLayout_5->addWidget(textEdit);


        horizontalLayout_2->addLayout(verticalLayout_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(ImportExport);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        comboBox_4 = new QComboBox(ImportExport);
        comboBox_4->setObjectName("comboBox_4");

        verticalLayout_2->addWidget(comboBox_4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_6 = new QLabel(ImportExport);
        label_6->setObjectName("label_6");

        verticalLayout_3->addWidget(label_6);

        comboBox = new QComboBox(ImportExport);
        comboBox->setObjectName("comboBox");

        verticalLayout_3->addWidget(comboBox);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox_2 = new QDialogButtonBox(ImportExport);
        buttonBox_2->setObjectName("buttonBox_2");
        buttonBox_2->setOrientation(Qt::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox_2);


        retranslateUi(ImportExport);
        QObject::connect(buttonBox_2, &QDialogButtonBox::rejected, ImportExport, qOverload<>(&QDialog::reject));
        QObject::connect(buttonBox_2, SIGNAL(accepted()), ImportExport, SLOT(ok()));
        QObject::connect(chooseDirectory_5, SIGNAL(clicked()), ImportExport, SLOT(browse()));

        comboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ImportExport);
    } // setupUi

    void retranslateUi(QDialog *ImportExport)
    {
        ImportExport->setWindowTitle(QCoreApplication::translate("ImportExport", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("ImportExport", "Target Directory:", nullptr));
        chooseDirectory_5->setText(QCoreApplication::translate("ImportExport", "...", nullptr));
        label->setText(QCoreApplication::translate("ImportExport", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("ImportExport", "Format:", nullptr));
        label_6->setText(QCoreApplication::translate("ImportExport", "Archive Type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImportExport: public Ui_ImportExport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTEXPORT_H
