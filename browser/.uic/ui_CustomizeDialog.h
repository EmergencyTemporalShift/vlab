/********************************************************************************
** Form generated from reading UI file 'CustomizeDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMIZEDIALOG_H
#define UI_CUSTOMIZEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "ColorButton.h"

QT_BEGIN_NAMESPACE

class Ui_CustomizeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    ColorButton *background_cbutton;
    ColorButton *bborder_cbutton;
    ColorButton *line_cbutton;
    ColorButton *text_cbutton;
    ColorButton *bfill_cbutton;
    ColorButton *hborder_cbutton;
    ColorButton *hfill_cbutton;
    ColorButton *selection_cbutton;
    ColorButton *link_cbutton;
    QGridLayout *gridLayout;
    QGroupBox *groupBox1_2;
    QHBoxLayout *hboxLayout;
    QSlider *iconSize_slider;
    QSpinBox *iconSize_spin;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QCheckBox *centerParent_checkbox;
    QCheckBox *compacting_checkbox;
    QGroupBox *groupBox5;
    QVBoxLayout *vboxLayout1;
    QLabel *font_label;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacer2;
    QPushButton *font_button;
    QSpacerItem *spacer2_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CustomizeDialog)
    {
        if (CustomizeDialog->objectName().isEmpty())
            CustomizeDialog->setObjectName("CustomizeDialog");
        CustomizeDialog->resize(395, 362);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CustomizeDialog->sizePolicy().hasHeightForWidth());
        CustomizeDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(CustomizeDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName("vboxLayout");
        groupBox_2 = new QGroupBox(CustomizeDialog);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        background_cbutton = new ColorButton(groupBox_2);
        background_cbutton->setObjectName("background_cbutton");

        verticalLayout_2->addWidget(background_cbutton);

        bborder_cbutton = new ColorButton(groupBox_2);
        bborder_cbutton->setObjectName("bborder_cbutton");

        verticalLayout_2->addWidget(bborder_cbutton);

        line_cbutton = new ColorButton(groupBox_2);
        line_cbutton->setObjectName("line_cbutton");

        verticalLayout_2->addWidget(line_cbutton);

        text_cbutton = new ColorButton(groupBox_2);
        text_cbutton->setObjectName("text_cbutton");

        verticalLayout_2->addWidget(text_cbutton);

        bfill_cbutton = new ColorButton(groupBox_2);
        bfill_cbutton->setObjectName("bfill_cbutton");

        verticalLayout_2->addWidget(bfill_cbutton);

        hborder_cbutton = new ColorButton(groupBox_2);
        hborder_cbutton->setObjectName("hborder_cbutton");

        verticalLayout_2->addWidget(hborder_cbutton);

        hfill_cbutton = new ColorButton(groupBox_2);
        hfill_cbutton->setObjectName("hfill_cbutton");

        verticalLayout_2->addWidget(hfill_cbutton);

        selection_cbutton = new ColorButton(groupBox_2);
        selection_cbutton->setObjectName("selection_cbutton");

        verticalLayout_2->addWidget(selection_cbutton);

        link_cbutton = new ColorButton(groupBox_2);
        link_cbutton->setObjectName("link_cbutton");

        verticalLayout_2->addWidget(link_cbutton);


        vboxLayout->addWidget(groupBox_2);


        horizontalLayout->addLayout(vboxLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        groupBox1_2 = new QGroupBox(CustomizeDialog);
        groupBox1_2->setObjectName("groupBox1_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox1_2->sizePolicy().hasHeightForWidth());
        groupBox1_2->setSizePolicy(sizePolicy1);
        hboxLayout = new QHBoxLayout(groupBox1_2);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName("hboxLayout");
        iconSize_slider = new QSlider(groupBox1_2);
        iconSize_slider->setObjectName("iconSize_slider");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(iconSize_slider->sizePolicy().hasHeightForWidth());
        iconSize_slider->setSizePolicy(sizePolicy2);
        iconSize_slider->setFocusPolicy(Qt::ClickFocus);
        iconSize_slider->setOrientation(Qt::Horizontal);

        hboxLayout->addWidget(iconSize_slider);

        iconSize_spin = new QSpinBox(groupBox1_2);
        iconSize_spin->setObjectName("iconSize_spin");
        iconSize_spin->setFocusPolicy(Qt::ClickFocus);
        iconSize_spin->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        iconSize_spin->setMinimum(2);
        iconSize_spin->setMaximum(500);
        iconSize_spin->setValue(123);

        hboxLayout->addWidget(iconSize_spin);


        gridLayout->addWidget(groupBox1_2, 0, 0, 1, 1, Qt::AlignTop);

        groupBox = new QGroupBox(CustomizeDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setEnabled(true);
        formLayout = new QFormLayout(groupBox);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        centerParent_checkbox = new QCheckBox(groupBox);
        centerParent_checkbox->setObjectName("centerParent_checkbox");
        centerParent_checkbox->setFocusPolicy(Qt::ClickFocus);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, centerParent_checkbox);

        compacting_checkbox = new QCheckBox(groupBox);
        compacting_checkbox->setObjectName("compacting_checkbox");
        compacting_checkbox->setFocusPolicy(Qt::ClickFocus);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, compacting_checkbox);


        gridLayout->addWidget(groupBox, 2, 0, 1, 1, Qt::AlignLeft);

        groupBox5 = new QGroupBox(CustomizeDialog);
        groupBox5->setObjectName("groupBox5");
        vboxLayout1 = new QVBoxLayout(groupBox5);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName("vboxLayout1");
        font_label = new QLabel(groupBox5);
        font_label->setObjectName("font_label");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(font_label->sizePolicy().hasHeightForWidth());
        font_label->setSizePolicy(sizePolicy3);
        font_label->setFrameShape(QFrame::NoFrame);
        font_label->setFrameShadow(QFrame::Raised);
        font_label->setWordWrap(false);

        vboxLayout1->addWidget(font_label);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName("hboxLayout1");
        spacer2 = new QSpacerItem(40, 21, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout1->addItem(spacer2);

        font_button = new QPushButton(groupBox5);
        font_button->setObjectName("font_button");
        font_button->setFocusPolicy(Qt::ClickFocus);

        hboxLayout1->addWidget(font_button);

        spacer2_2 = new QSpacerItem(40, 21, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout1->addItem(spacer2_2);


        vboxLayout1->addLayout(hboxLayout1);


        gridLayout->addWidget(groupBox5, 1, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(CustomizeDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset|QDialogButtonBox::RestoreDefaults);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CustomizeDialog);

        QMetaObject::connectSlotsByName(CustomizeDialog);
    } // setupUi

    void retranslateUi(QDialog *CustomizeDialog)
    {
        CustomizeDialog->setWindowTitle(QCoreApplication::translate("CustomizeDialog", "Browser customization", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("CustomizeDialog", "Color selection", nullptr));
        groupBox1_2->setTitle(QCoreApplication::translate("CustomizeDialog", "Icon size", nullptr));
#if QT_CONFIG(tooltip)
        iconSize_spin->setToolTip(QCoreApplication::translate("CustomizeDialog", "Set the icon size", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("CustomizeDialog", "Tree display", nullptr));
#if QT_CONFIG(tooltip)
        centerParent_checkbox->setToolTip(QCoreApplication::translate("CustomizeDialog", "Should the tree be rendered to minimize space?", nullptr));
#endif // QT_CONFIG(tooltip)
        centerParent_checkbox->setText(QCoreApplication::translate("CustomizeDialog", "Center parent", nullptr));
#if QT_CONFIG(tooltip)
        compacting_checkbox->setToolTip(QCoreApplication::translate("CustomizeDialog", "Should the tree be rendered to minimize space?", nullptr));
#endif // QT_CONFIG(tooltip)
        compacting_checkbox->setText(QCoreApplication::translate("CustomizeDialog", "Compacting", nullptr));
        groupBox5->setTitle(QCoreApplication::translate("CustomizeDialog", "Font", nullptr));
        font_label->setText(QCoreApplication::translate("CustomizeDialog", "<p align=\"center\">abcdefg<br>\n"
"ABCDEFG</p>", nullptr));
        font_button->setText(QCoreApplication::translate("CustomizeDialog", "Font", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomizeDialog: public Ui_CustomizeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMIZEDIALOG_H
