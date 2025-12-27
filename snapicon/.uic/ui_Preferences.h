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
    QPushButton *border_color_button;
    QSpinBox *borderWidth_spinBox;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *background_color_button;
    QWidget *tab_2;
    QPlainTextEdit *plainTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Preferences)
    {
        if (Preferences->objectName().isEmpty())
            Preferences->setObjectName("Preferences");
        Preferences->resize(353, 253);
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
        groupBox->setGeometry(QRect(20, 0, 281, 141));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 20, 261, 118));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        border_color_button = new QPushButton(gridLayoutWidget);
        border_color_button->setObjectName("border_color_button");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(border_color_button->sizePolicy().hasHeightForWidth());
        border_color_button->setSizePolicy(sizePolicy1);
        border_color_button->setAutoFillBackground(true);
        border_color_button->setFlat(true);

        gridLayout->addWidget(border_color_button, 1, 1, 1, 1);

        borderWidth_spinBox = new QSpinBox(gridLayoutWidget);
        borderWidth_spinBox->setObjectName("borderWidth_spinBox");
        QFont font;
        font.setPointSize(11);
        borderWidth_spinBox->setFont(font);

        gridLayout->addWidget(borderWidth_spinBox, 0, 1, 1, 1);

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

        background_color_button = new QPushButton(gridLayoutWidget);
        background_color_button->setObjectName("background_color_button");
        sizePolicy1.setHeightForWidth(background_color_button->sizePolicy().hasHeightForWidth());
        background_color_button->setSizePolicy(sizePolicy1);
        background_color_button->setAutoFillBackground(true);
        background_color_button->setFlat(true);

        gridLayout->addWidget(background_color_button, 2, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        plainTextEdit = new QPlainTextEdit(tab_2);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(10, 10, 281, 131));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy2);
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(Preferences);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
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
        border_color_button->setText(QString());
        label->setText(QCoreApplication::translate("Preferences", "Border width", nullptr));
        label_3->setText(QCoreApplication::translate("Preferences", "Border color", nullptr));
        label_2->setText(QCoreApplication::translate("Preferences", "Background color", nullptr));
        background_color_button->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Preferences", "Tools", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Preferences", "Editor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Preferences: public Ui_Preferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
