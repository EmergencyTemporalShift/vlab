/********************************************************************************
** Form generated from reading UI file 'FixOofsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIXOOFSDIALOG_H
#define UI_FIXOOFSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FixOofsDialog
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QTextEdit *webView;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *renumberCheckBox;
    QPushButton *goButton;
    QSpacerItem *verticalSpacer;
    QPushButton *saveButton;
    QPushButton *closeButton;

    void setupUi(QDialog *FixOofsDialog)
    {
        if (FixOofsDialog->objectName().isEmpty())
            FixOofsDialog->setObjectName("FixOofsDialog");
        FixOofsDialog->resize(978, 827);
        FixOofsDialog->setSizeGripEnabled(true);
        gridLayout_2 = new QGridLayout(FixOofsDialog);
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        gridLayout_2->setObjectName("gridLayout_2");
        frame = new QFrame(FixOofsDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName("gridLayout");
        webView = new QTextEdit(frame);
        webView->setObjectName("webView");

        gridLayout->addWidget(webView, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, -1, -1, -1);

        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        renumberCheckBox = new QCheckBox(FixOofsDialog);
        renumberCheckBox->setObjectName("renumberCheckBox");

        verticalLayout_2->addWidget(renumberCheckBox);

        goButton = new QPushButton(FixOofsDialog);
        goButton->setObjectName("goButton");
        goButton->setMinimumSize(QSize(100, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/Right3Green.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        goButton->setIcon(icon);
        goButton->setIconSize(QSize(32, 32));
        goButton->setFlat(false);

        verticalLayout_2->addWidget(goButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        saveButton = new QPushButton(FixOofsDialog);
        saveButton->setObjectName("saveButton");

        verticalLayout_2->addWidget(saveButton);

        closeButton = new QPushButton(FixOofsDialog);
        closeButton->setObjectName("closeButton");

        verticalLayout_2->addWidget(closeButton);


        gridLayout_2->addLayout(verticalLayout_2, 0, 1, 1, 1);


        retranslateUi(FixOofsDialog);
        QObject::connect(closeButton, &QPushButton::clicked, FixOofsDialog, qOverload<>(&QDialog::close));

        goButton->setDefault(true);


        QMetaObject::connectSlotsByName(FixOofsDialog);
    } // setupUi

    void retranslateUi(QDialog *FixOofsDialog)
    {
        FixOofsDialog->setWindowTitle(QCoreApplication::translate("FixOofsDialog", "Update database", nullptr));
#if QT_CONFIG(tooltip)
        renumberCheckBox->setToolTip(QCoreApplication::translate("FixOofsDialog", "Check this to regenerate all existing UUIDs in the database.\n"
"This is recommended if you were copying objects\n"
"between different databases.", nullptr));
#endif // QT_CONFIG(tooltip)
        renumberCheckBox->setText(QCoreApplication::translate("FixOofsDialog", "New UUIDs", nullptr));
#if QT_CONFIG(tooltip)
        goButton->setToolTip(QCoreApplication::translate("FixOofsDialog", "Go fix the database.", nullptr));
#endif // QT_CONFIG(tooltip)
        goButton->setText(QCoreApplication::translate("FixOofsDialog", "Go!", nullptr));
#if QT_CONFIG(tooltip)
        saveButton->setToolTip(QCoreApplication::translate("FixOofsDialog", "Save this log into a file in the root object.", nullptr));
#endif // QT_CONFIG(tooltip)
        saveButton->setText(QCoreApplication::translate("FixOofsDialog", "Save log", nullptr));
#if QT_CONFIG(tooltip)
        closeButton->setToolTip(QCoreApplication::translate("FixOofsDialog", "Close this dialog.", nullptr));
#endif // QT_CONFIG(tooltip)
        closeButton->setText(QCoreApplication::translate("FixOofsDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FixOofsDialog: public Ui_FixOofsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIXOOFSDIALOG_H
