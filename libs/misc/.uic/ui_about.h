/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *appName;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLabel *logo;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *version;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *credits_button;
    QPushButton *LicenceButton;
    QPushButton *notices_button;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName("About");
        About->resize(411, 393);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(About->sizePolicy().hasHeightForWidth());
        About->setSizePolicy(sizePolicy);
        About->setAutoFillBackground(true);
        About->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget = new QWidget(About);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 14, 371, 361));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        appName = new QLabel(verticalLayoutWidget);
        appName->setObjectName("appName");
        QPalette palette;
        QBrush brush(QColor(84, 130, 53, 217));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 217));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush1);
        QBrush brush2(QColor(46, 202, 9, 128));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        QBrush brush3(QColor(0, 0, 0, 63));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush3);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush4);
#endif
        appName->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Helvetica")});
        font.setPointSize(32);
        font.setBold(true);
        appName->setFont(font);
        appName->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(appName);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Helvetica")});
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        logo = new QLabel(verticalLayoutWidget);
        logo->setObjectName("logo");
        QFont font2;
        font2.setPointSize(60);
        logo->setFont(font2);
        logo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(logo);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Helvetica")});
        font3.setPointSize(18);
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_2->addWidget(label_3);

        version = new QLabel(verticalLayoutWidget);
        version->setObjectName("version");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Helvetica")});
        font4.setPointSize(12);
        version->setFont(font4);
        version->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_2->addWidget(version);


        verticalLayout->addLayout(verticalLayout_2);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Helvetica")});
        font5.setPointSize(13);
        label_5->setFont(font5);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        credits_button = new QPushButton(verticalLayoutWidget);
        credits_button->setObjectName("credits_button");
        credits_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 10px;\n"
"    border-color: black;\n"
"    font:  12px;\n"
"   padding: 6px;\n"
"}"));

        horizontalLayout->addWidget(credits_button);

        LicenceButton = new QPushButton(verticalLayoutWidget);
        LicenceButton->setObjectName("LicenceButton");
        LicenceButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 10px;\n"
"    border-color: black;\n"
"    font:  12px;\n"
"   padding: 6px;\n"
"}"));

        horizontalLayout->addWidget(LicenceButton);

        notices_button = new QPushButton(verticalLayoutWidget);
        notices_button->setObjectName("notices_button");
        notices_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 10px;\n"
"    border-color: black;\n"
"    font:  12px;\n"
"   padding: 6px;\n"
"}"));
        notices_button->setFlat(false);

        horizontalLayout->addWidget(notices_button);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "About", nullptr));
        appName->setText(QCoreApplication::translate("About", "Funcedit", nullptr));
        label_2->setText(QCoreApplication::translate("About", "A component of", nullptr));
        logo->setText(QCoreApplication::translate("About", "LOGO", nullptr));
        label_3->setText(QCoreApplication::translate("About", "THE VIRTUAL LABORATORY", nullptr));
        version->setText(QCoreApplication::translate("About", "Version 5.0.0 - Build #3602, August 10, 2022", nullptr));
        label_5->setText(QCoreApplication::translate("About", "Biological Modeling and Visualization Laboratory\n"
"Department of Computer Science\n"
"University of Calgary\n"
" email: vlab.algorithmicbotany@gmail.com\n"
"\n"
"Copyright (C) 1990-2025 University of Calgary", nullptr));
        credits_button->setText(QCoreApplication::translate("About", "Credits", nullptr));
        LicenceButton->setText(QCoreApplication::translate("About", "License", nullptr));
        notices_button->setText(QCoreApplication::translate("About", "Third party notices", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
