/********************************************************************************
** Form generated from reading UI file 'Preferences.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Preferences
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *button_selected_color;
    QSpinBox *pointSize_spinBox;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *button_unselected_color;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QSpinBox *labelYOffset_spinBox;
    QLabel *label_6;
    QSpinBox *startEndYOffset_spinBox;
    QPushButton *button_eventLabel_color;
    QSpinBox *yOffset_spinBox;
    QPushButton *button_eventTitle_color;
    QLabel *label_5;
    QLabel *label_4;
    QSpinBox *segmentWidth_spinBox;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_14;
    QLabel *label_13;
    QPushButton *button_segment_color;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_12;
    QLabel *label_11;
    QPushButton *button_background_color;
    QLabel *label_9;
    QPushButton *button_grid_color;
    QPushButton *button_gridLabel_color;
    QPushButton *font_button;
    QLabel *label_10;
    QPushButton *button_backgroundEdit_color;
    QWidget *tab_2;
    QPlainTextEdit *plainTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Preferences)
    {
        if (Preferences->objectName().isEmpty())
            Preferences->setObjectName("Preferences");
        Preferences->resize(371, 858);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Preferences->sizePolicy().hasHeightForWidth());
        Preferences->setSizePolicy(sizePolicy);
        Preferences->setSizeGripEnabled(true);
        Preferences->setModal(true);
        verticalLayout = new QVBoxLayout(Preferences);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(Preferences);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 300, 281, 141));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 20, 261, 118));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        button_selected_color = new QPushButton(gridLayoutWidget);
        button_selected_color->setObjectName("button_selected_color");
        button_selected_color->setAutoFillBackground(true);
        button_selected_color->setFlat(true);

        gridLayout->addWidget(button_selected_color, 1, 1, 1, 1);

        pointSize_spinBox = new QSpinBox(gridLayoutWidget);
        pointSize_spinBox->setObjectName("pointSize_spinBox");
        QFont font;
        font.setPointSize(11);
        pointSize_spinBox->setFont(font);

        gridLayout->addWidget(pointSize_spinBox, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        button_unselected_color = new QPushButton(gridLayoutWidget);
        button_unselected_color->setObjectName("button_unselected_color");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_unselected_color->sizePolicy().hasHeightForWidth());
        button_unselected_color->setSizePolicy(sizePolicy1);
        button_unselected_color->setAutoFillBackground(true);
        button_unselected_color->setFlat(true);

        gridLayout->addWidget(button_unselected_color, 2, 1, 1, 1);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(40, 450, 281, 311));
        gridLayoutWidget_2 = new QWidget(groupBox_2);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(0, 30, 271, 266));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        labelYOffset_spinBox = new QSpinBox(gridLayoutWidget_2);
        labelYOffset_spinBox->setObjectName("labelYOffset_spinBox");
        labelYOffset_spinBox->setFont(font);

        gridLayout_2->addWidget(labelYOffset_spinBox, 1, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        startEndYOffset_spinBox = new QSpinBox(gridLayoutWidget_2);
        startEndYOffset_spinBox->setObjectName("startEndYOffset_spinBox");
        startEndYOffset_spinBox->setFont(font);

        gridLayout_2->addWidget(startEndYOffset_spinBox, 2, 1, 1, 1);

        button_eventLabel_color = new QPushButton(gridLayoutWidget_2);
        button_eventLabel_color->setObjectName("button_eventLabel_color");
        button_eventLabel_color->setAutoFillBackground(true);
        button_eventLabel_color->setFlat(true);

        gridLayout_2->addWidget(button_eventLabel_color, 5, 1, 1, 1);

        yOffset_spinBox = new QSpinBox(gridLayoutWidget_2);
        yOffset_spinBox->setObjectName("yOffset_spinBox");
        yOffset_spinBox->setFont(font);
        yOffset_spinBox->setMaximum(250);

        gridLayout_2->addWidget(yOffset_spinBox, 3, 1, 1, 1);

        button_eventTitle_color = new QPushButton(gridLayoutWidget_2);
        button_eventTitle_color->setObjectName("button_eventTitle_color");
        button_eventTitle_color->setAutoFillBackground(true);
        button_eventTitle_color->setFlat(true);

        gridLayout_2->addWidget(button_eventTitle_color, 4, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        segmentWidth_spinBox = new QSpinBox(gridLayoutWidget_2);
        segmentWidth_spinBox->setObjectName("segmentWidth_spinBox");
        segmentWidth_spinBox->setFont(font);

        gridLayout_2->addWidget(segmentWidth_spinBox, 0, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_2);
        label_14->setObjectName("label_14");
        label_14->setFont(font);

        gridLayout_2->addWidget(label_14, 3, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_2);
        label_13->setObjectName("label_13");
        label_13->setFont(font);

        gridLayout_2->addWidget(label_13, 6, 0, 1, 1);

        button_segment_color = new QPushButton(gridLayoutWidget_2);
        button_segment_color->setObjectName("button_segment_color");
        button_segment_color->setAutoFillBackground(true);
        button_segment_color->setFlat(true);

        gridLayout_2->addWidget(button_segment_color, 6, 1, 1, 1);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(40, 10, 281, 251));
        gridLayoutWidget_3 = new QWidget(groupBox_3);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(10, 30, 261, 209));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(1, 1, 1, 1);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(gridLayoutWidget_3);
        label_12->setObjectName("label_12");
        label_12->setFont(font);

        gridLayout_3->addWidget(label_12, 3, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_3);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        gridLayout_3->addWidget(label_11, 1, 0, 1, 1);

        button_background_color = new QPushButton(gridLayoutWidget_3);
        button_background_color->setObjectName("button_background_color");
        button_background_color->setAutoFillBackground(true);
        button_background_color->setFlat(true);

        gridLayout_3->addWidget(button_background_color, 1, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_3);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        gridLayout_3->addWidget(label_9, 4, 0, 1, 1);

        button_grid_color = new QPushButton(gridLayoutWidget_3);
        button_grid_color->setObjectName("button_grid_color");
        button_grid_color->setAutoFillBackground(true);
        button_grid_color->setFlat(true);

        gridLayout_3->addWidget(button_grid_color, 3, 1, 1, 1);

        button_gridLabel_color = new QPushButton(gridLayoutWidget_3);
        button_gridLabel_color->setObjectName("button_gridLabel_color");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(button_gridLabel_color->sizePolicy().hasHeightForWidth());
        button_gridLabel_color->setSizePolicy(sizePolicy2);
        button_gridLabel_color->setAutoFillBackground(true);
        button_gridLabel_color->setFlat(true);

        gridLayout_3->addWidget(button_gridLabel_color, 4, 1, 1, 1);

        font_button = new QPushButton(gridLayoutWidget_3);
        font_button->setObjectName("font_button");
        font_button->setFocusPolicy(Qt::ClickFocus);

        gridLayout_3->addWidget(font_button, 0, 0, 1, 2);

        label_10 = new QLabel(gridLayoutWidget_3);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        gridLayout_3->addWidget(label_10, 2, 0, 1, 1);

        button_backgroundEdit_color = new QPushButton(gridLayoutWidget_3);
        button_backgroundEdit_color->setObjectName("button_backgroundEdit_color");
        button_backgroundEdit_color->setAutoFillBackground(true);
        button_backgroundEdit_color->setFlat(true);

        gridLayout_3->addWidget(button_backgroundEdit_color, 2, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        plainTextEdit = new QPlainTextEdit(tab_2);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(10, 10, 331, 551));
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy3);
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(Preferences);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Preferences);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Preferences, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Preferences, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Preferences);
    } // setupUi

    void retranslateUi(QDialog *Preferences)
    {
        Preferences->setWindowTitle(QCoreApplication::translate("Preferences", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Preferences", "Points", nullptr));
        button_selected_color->setText(QString());
        label->setText(QCoreApplication::translate("Preferences", "Size", nullptr));
        label_3->setText(QCoreApplication::translate("Preferences", " Color selected", nullptr));
        label_2->setText(QCoreApplication::translate("Preferences", "Color unselected", nullptr));
        button_unselected_color->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("Preferences", "Events", nullptr));
        label_6->setText(QCoreApplication::translate("Preferences", "Label color", nullptr));
        button_eventLabel_color->setText(QString());
        button_eventTitle_color->setText(QString());
        label_5->setText(QCoreApplication::translate("Preferences", "Title color", nullptr));
        label_4->setText(QCoreApplication::translate("Preferences", "Segment Width", nullptr));
        label_8->setText(QCoreApplication::translate("Preferences", "Start/End offset", nullptr));
        label_7->setText(QCoreApplication::translate("Preferences", "Label offset", nullptr));
        label_14->setText(QCoreApplication::translate("Preferences", "Offset betweeen segments", nullptr));
        label_13->setText(QCoreApplication::translate("Preferences", "Segment color", nullptr));
        button_segment_color->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("Preferences", "General Appearance", nullptr));
        label_12->setText(QCoreApplication::translate("Preferences", "Grid color", nullptr));
        label_11->setText(QCoreApplication::translate("Preferences", " Background color", nullptr));
        button_background_color->setText(QString());
        label_9->setText(QCoreApplication::translate("Preferences", "Grid label color", nullptr));
        button_grid_color->setText(QString());
        button_gridLabel_color->setText(QString());
        font_button->setText(QCoreApplication::translate("Preferences", "Font", nullptr));
        label_10->setText(QCoreApplication::translate("Preferences", "Background Edit color", nullptr));
        button_backgroundEdit_color->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Preferences", "Tools", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Preferences", "Editor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Preferences: public Ui_Preferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
