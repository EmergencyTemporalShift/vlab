/********************************************************************************
** Form generated from reading UI file 'ColorButton.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORBUTTON_H
#define UI_COLORBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UI_ColorButton
{
public:
    QHBoxLayout *hboxLayout;
    QPushButton *button;

    void setupUi(QWidget *UI_ColorButton)
    {
        if (UI_ColorButton->objectName().isEmpty())
            UI_ColorButton->setObjectName("UI_ColorButton");
        UI_ColorButton->resize(136, 32);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UI_ColorButton->sizePolicy().hasHeightForWidth());
        UI_ColorButton->setSizePolicy(sizePolicy);
        hboxLayout = new QHBoxLayout(UI_ColorButton);
        hboxLayout->setSpacing(0);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName("hboxLayout");
        button = new QPushButton(UI_ColorButton);
        button->setObjectName("button");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button->sizePolicy().hasHeightForWidth());
        button->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(button);


        retranslateUi(UI_ColorButton);

        QMetaObject::connectSlotsByName(UI_ColorButton);
    } // setupUi

    void retranslateUi(QWidget *UI_ColorButton)
    {
        UI_ColorButton->setWindowTitle(QCoreApplication::translate("UI_ColorButton", "Form1", nullptr));
        button->setText(QCoreApplication::translate("UI_ColorButton", "pushButton19", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UI_ColorButton: public Ui_UI_ColorButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORBUTTON_H
