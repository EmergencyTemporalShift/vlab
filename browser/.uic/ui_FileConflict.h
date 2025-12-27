/********************************************************************************
** Form generated from reading UI file 'FileConflict.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILECONFLICT_H
#define UI_FILECONFLICT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FileConflict
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QTreeWidget *treeWidget;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *FileConflict)
    {
        if (FileConflict->objectName().isEmpty())
            FileConflict->setObjectName("FileConflict");
        FileConflict->resize(445, 535);
        gridLayout = new QGridLayout(FileConflict);
        gridLayout->setObjectName("gridLayout");
        groupBox_2 = new QGroupBox(FileConflict);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 3);

        label = new QLabel(FileConflict);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit = new QLineEdit(FileConflict);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 2, 0, 1, 3);

        treeWidget = new QTreeWidget(FileConflict);
        treeWidget->setObjectName("treeWidget");

        gridLayout->addWidget(treeWidget, 3, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(259, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        pushButton_2 = new QPushButton(FileConflict);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMaximumSize(QSize(80, 16777215));
        pushButton_2->setAutoDefault(false);

        gridLayout->addWidget(pushButton_2, 4, 1, 1, 1);

        pushButton = new QPushButton(FileConflict);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(80, 16777215));
        pushButton->setAutoDefault(false);

        gridLayout->addWidget(pushButton, 4, 2, 1, 1);


        retranslateUi(FileConflict);
        QObject::connect(pushButton, &QPushButton::clicked, FileConflict, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_2, &QPushButton::clicked, FileConflict, qOverload<>(&QDialog::reject));
        QObject::connect(treeWidget, SIGNAL(itemSelectionChanged()), FileConflict, SLOT(treeSelectionChanged()));
        QObject::connect(lineEdit, SIGNAL(textEdited(QString)), FileConflict, SLOT(lineEditChanged(QString)));
        QObject::connect(lineEdit, SIGNAL(editingFinished()), FileConflict, SLOT(lineEditLostFocus()));
        QObject::connect(treeWidget, SIGNAL(itemClicked(QTreeWidgetItem*,int)), FileConflict, SLOT(refreshTree(QTreeWidgetItem*)));

        QMetaObject::connectSlotsByName(FileConflict);
    } // setupUi

    void retranslateUi(QDialog *FileConflict)
    {
        FileConflict->setWindowTitle(QCoreApplication::translate("FileConflict", "Dialog", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("FileConflict", "Resolution Options", nullptr));
        label_2->setText(QCoreApplication::translate("FileConflict", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#008e12;\">Green</span> - Skip file</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">Red</span> - Overwrite Files / Merge Directories</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Black - No conflict</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("FileConflict", "New target name", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FileConflict", "Cancel", nullptr));
        pushButton->setText(QCoreApplication::translate("FileConflict", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileConflict: public Ui_FileConflict {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECONFLICT_H
