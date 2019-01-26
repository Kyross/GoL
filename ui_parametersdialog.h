/********************************************************************************
** Form generated from reading UI file 'parametersdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETERSDIALOG_H
#define UI_PARAMETERSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParametersDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *warning_label;
    QSpinBox *universe_spinBox;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QSpinBox *timer_spinBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QPushButton *colorpushButton;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_2;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *stase_checkBox;
    QSpinBox *stase_spinBox;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *dead_checkBox;
    QSpinBox *dead_alone_spinBox;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *born_checkBox;
    QSpinBox *born_spinBox;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *checkBox;
    QSpinBox *dead_surpopulation_spinBox;
    QPushButton *reset_mode_pushButton;
    QWidget *tab_3;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *random_spinBox;
    QPushButton *random_pushButton;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QComboBox *demo_comboBox;
    QPushButton *demo_load_pushButton;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QDialog *ParametersDialog)
    {
        if (ParametersDialog->objectName().isEmpty())
            ParametersDialog->setObjectName(QString::fromUtf8("ParametersDialog"));
        ParametersDialog->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/i_params.png"), QSize(), QIcon::Normal, QIcon::Off);
        ParametersDialog->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(ParametersDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(ParametersDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 280));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        warning_label = new QLabel(tab);
        warning_label->setObjectName(QString::fromUtf8("warning_label"));
        warning_label->setEnabled(true);
        warning_label->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(warning_label);


        horizontalLayout_8->addLayout(verticalLayout_2);

        universe_spinBox = new QSpinBox(tab);
        universe_spinBox->setObjectName(QString::fromUtf8("universe_spinBox"));

        horizontalLayout_8->addWidget(universe_spinBox);


        verticalLayout_4->addLayout(horizontalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_7->addWidget(label_2);

        timer_spinBox = new QSpinBox(tab);
        timer_spinBox->setObjectName(QString::fromUtf8("timer_spinBox"));

        horizontalLayout_7->addWidget(timer_spinBox);


        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        colorpushButton = new QPushButton(tab);
        colorpushButton->setObjectName(QString::fromUtf8("colorpushButton"));
        colorpushButton->setMinimumSize(QSize(175, 16));
        colorpushButton->setMaximumSize(QSize(16, 16));
        colorpushButton->setIconSize(QSize(175, 16));
        colorpushButton->setAutoDefault(false);

        horizontalLayout_6->addWidget(colorpushButton);


        verticalLayout_4->addLayout(horizontalLayout_6);


        gridLayout_3->addLayout(verticalLayout_4, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_4, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_7 = new QGridLayout(tab_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        stase_checkBox = new QCheckBox(tab_2);
        stase_checkBox->setObjectName(QString::fromUtf8("stase_checkBox"));
        stase_checkBox->setChecked(true);

        horizontalLayout_3->addWidget(stase_checkBox);

        stase_spinBox = new QSpinBox(tab_2);
        stase_spinBox->setObjectName(QString::fromUtf8("stase_spinBox"));
        stase_spinBox->setMaximum(9);
        stase_spinBox->setValue(2);

        horizontalLayout_3->addWidget(stase_spinBox);


        gridLayout_6->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        dead_checkBox = new QCheckBox(tab_2);
        dead_checkBox->setObjectName(QString::fromUtf8("dead_checkBox"));
        dead_checkBox->setChecked(true);

        horizontalLayout_10->addWidget(dead_checkBox);

        dead_alone_spinBox = new QSpinBox(tab_2);
        dead_alone_spinBox->setObjectName(QString::fromUtf8("dead_alone_spinBox"));
        dead_alone_spinBox->setMaximum(9);
        dead_alone_spinBox->setValue(2);

        horizontalLayout_10->addWidget(dead_alone_spinBox);


        gridLayout_6->addLayout(horizontalLayout_10, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        born_checkBox = new QCheckBox(tab_2);
        born_checkBox->setObjectName(QString::fromUtf8("born_checkBox"));
        born_checkBox->setChecked(true);
        born_checkBox->setTristate(false);

        horizontalLayout_5->addWidget(born_checkBox);

        born_spinBox = new QSpinBox(tab_2);
        born_spinBox->setObjectName(QString::fromUtf8("born_spinBox"));
        born_spinBox->setMaximum(9);
        born_spinBox->setValue(3);

        horizontalLayout_5->addWidget(born_spinBox);


        gridLayout_6->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        checkBox = new QCheckBox(tab_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(true);

        horizontalLayout_11->addWidget(checkBox);

        dead_surpopulation_spinBox = new QSpinBox(tab_2);
        dead_surpopulation_spinBox->setObjectName(QString::fromUtf8("dead_surpopulation_spinBox"));
        dead_surpopulation_spinBox->setMaximum(9);
        dead_surpopulation_spinBox->setValue(3);

        horizontalLayout_11->addWidget(dead_surpopulation_spinBox);


        gridLayout_6->addLayout(horizontalLayout_11, 5, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        reset_mode_pushButton = new QPushButton(tab_2);
        reset_mode_pushButton->setObjectName(QString::fromUtf8("reset_mode_pushButton"));
        reset_mode_pushButton->setAutoDefault(false);

        gridLayout_7->addWidget(reset_mode_pushButton, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_5 = new QGridLayout(tab_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_8);

        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 112));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(label_4);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        random_spinBox = new QSpinBox(tab_3);
        random_spinBox->setObjectName(QString::fromUtf8("random_spinBox"));
        random_spinBox->setMaximum(100);
        random_spinBox->setValue(50);

        horizontalLayout_4->addWidget(random_spinBox);

        random_pushButton = new QPushButton(tab_3);
        random_pushButton->setObjectName(QString::fromUtf8("random_pushButton"));

        horizontalLayout_4->addWidget(random_pushButton);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        demo_comboBox = new QComboBox(tab_3);
        demo_comboBox->addItem(QString());
        demo_comboBox->addItem(QString());
        demo_comboBox->addItem(QString());
        demo_comboBox->addItem(QString());
        demo_comboBox->addItem(QString());
        demo_comboBox->addItem(QString());
        demo_comboBox->addItem(QString());
        demo_comboBox->addItem(QString());
        demo_comboBox->addItem(QString());
        demo_comboBox->addItem(QString());
        demo_comboBox->addItem(QString());
        demo_comboBox->setObjectName(QString::fromUtf8("demo_comboBox"));

        horizontalLayout->addWidget(demo_comboBox);

        demo_load_pushButton = new QPushButton(tab_3);
        demo_load_pushButton->setObjectName(QString::fromUtf8("demo_load_pushButton"));
        demo_load_pushButton->setAutoDefault(false);

        horizontalLayout->addWidget(demo_load_pushButton);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout_4->addLayout(verticalLayout_3, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_6, 1, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        retranslateUi(ParametersDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ParametersDialog);
    } // setupUi

    void retranslateUi(QDialog *ParametersDialog)
    {
        ParametersDialog->setWindowTitle(QApplication::translate("ParametersDialog", "Parameters", nullptr));
        label->setText(QApplication::translate("ParametersDialog", "Universe size", nullptr));
        warning_label->setText(QApplication::translate("ParametersDialog", "<html><head/><body><p><span style=\" color:#ff0000;\">Game must be clear before</span></p></body></html>", nullptr));
        universe_spinBox->setSuffix(QApplication::translate("ParametersDialog", " cells", nullptr));
        label_2->setText(QApplication::translate("ParametersDialog", "Timer", nullptr));
        timer_spinBox->setSuffix(QApplication::translate("ParametersDialog", " ms", nullptr));
        label_3->setText(QApplication::translate("ParametersDialog", "Color", nullptr));
        colorpushButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ParametersDialog", "Parameters", nullptr));
        stase_checkBox->setText(QApplication::translate("ParametersDialog", "Stase", nullptr));
        stase_spinBox->setSuffix(QApplication::translate("ParametersDialog", " = neighbour", nullptr));
        dead_checkBox->setText(QApplication::translate("ParametersDialog", "Dead alone", nullptr));
        dead_alone_spinBox->setSuffix(QApplication::translate("ParametersDialog", " < neighbour", nullptr));
        dead_alone_spinBox->setPrefix(QString());
        born_checkBox->setText(QApplication::translate("ParametersDialog", "Born", nullptr));
        born_spinBox->setSuffix(QApplication::translate("ParametersDialog", " = neighbour", nullptr));
        checkBox->setText(QApplication::translate("ParametersDialog", "Dead surpopulation", nullptr));
        dead_surpopulation_spinBox->setSuffix(QApplication::translate("ParametersDialog", " > neighbour", nullptr));
        reset_mode_pushButton->setText(QApplication::translate("ParametersDialog", "Reset", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ParametersDialog", "Game Mode", nullptr));
        label_4->setText(QApplication::translate("ParametersDialog", "<html><head/><body><p><a href=\"https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life#Examples_of_patterns\"><span style=\" text-decoration: underline; color:#0000ff;\">Example of patterns</span></a></p></body></html>", nullptr));
        random_spinBox->setSuffix(QApplication::translate("ParametersDialog", " % ", nullptr));
        random_pushButton->setText(QApplication::translate("ParametersDialog", "Random ", nullptr));
        demo_comboBox->setItemText(0, QApplication::translate("ParametersDialog", "Aircraft carrier (stable)", nullptr));
        demo_comboBox->setItemText(1, QApplication::translate("ParametersDialog", "Beehive (stable)", nullptr));
        demo_comboBox->setItemText(2, QApplication::translate("ParametersDialog", "Boat (stable)", nullptr));
        demo_comboBox->setItemText(3, QApplication::translate("ParametersDialog", "Loaf (stable)", nullptr));
        demo_comboBox->setItemText(4, QApplication::translate("ParametersDialog", "Beacon (oscillator)", nullptr));
        demo_comboBox->setItemText(5, QApplication::translate("ParametersDialog", "Toad (oscillator)", nullptr));
        demo_comboBox->setItemText(6, QApplication::translate("ParametersDialog", "Pentadecathlon (oscillator)", nullptr));
        demo_comboBox->setItemText(7, QApplication::translate("ParametersDialog", "Glider (ship)", nullptr));
        demo_comboBox->setItemText(8, QApplication::translate("ParametersDialog", "Small ship (ship)", nullptr));
        demo_comboBox->setItemText(9, QApplication::translate("ParametersDialog", "Glider Gun (canon)", nullptr));
        demo_comboBox->setItemText(10, QApplication::translate("ParametersDialog", "P46 Glider Gun (canon)", nullptr));

        demo_load_pushButton->setText(QApplication::translate("ParametersDialog", "Load demo", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ParametersDialog", "Demo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParametersDialog: public Ui_ParametersDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETERSDIALOG_H
