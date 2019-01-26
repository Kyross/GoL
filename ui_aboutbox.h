/********************************************************************************
** Form generated from reading UI file 'aboutbox.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTBOX_H
#define UI_ABOUTBOX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_aboutBox
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *close_pushButton;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *aboutBox)
    {
        if (aboutBox->objectName().isEmpty())
            aboutBox->setObjectName(QString::fromUtf8("aboutBox"));
        aboutBox->setWindowModality(Qt::NonModal);
        aboutBox->setEnabled(true);
        aboutBox->resize(505, 205);
        aboutBox->setMaximumSize(QSize(505, 205));
        QFont font;
        font.setKerning(true);
        aboutBox->setFont(font);
        aboutBox->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/vb_black_bg_border_512.png"), QSize(), QIcon::Normal, QIcon::Off);
        aboutBox->setWindowIcon(icon);
#ifndef QT_NO_WHATSTHIS
        aboutBox->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
        aboutBox->setSizeGripEnabled(false);
        aboutBox->setModal(false);
        gridLayout_2 = new QGridLayout(aboutBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        close_pushButton = new QPushButton(aboutBox);
        close_pushButton->setObjectName(QString::fromUtf8("close_pushButton"));

        gridLayout->addWidget(close_pushButton, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(aboutBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(150, 150));
        label->setAutoFillBackground(false);
        label->setPixmap(QPixmap(QString::fromUtf8(":/assets/vb_black_bg_border_512.png")));
        label->setScaledContents(true);

        horizontalLayout_5->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(aboutBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(32);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(aboutBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font2;
        font2.setPointSize(7);
        label_4->setFont(font2);

        verticalLayout->addWidget(label_4);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        label_5 = new QLabel(aboutBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font3;
        font3.setPointSize(10);
        label_5->setFont(font3);
        label_5->setTextFormat(Qt::RichText);
        label_5->setOpenExternalLinks(true);

        verticalLayout->addWidget(label_5);

        label_3 = new QLabel(aboutBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout_4->addLayout(verticalLayout);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        horizontalLayout->addLayout(horizontalLayout_5);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(aboutBox);

        QMetaObject::connectSlotsByName(aboutBox);
    } // setupUi

    void retranslateUi(QDialog *aboutBox)
    {
        aboutBox->setWindowTitle(QApplication::translate("aboutBox", "About !", nullptr));
        close_pushButton->setText(QApplication::translate("aboutBox", "Close", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("aboutBox", "Game of Life", nullptr));
        label_4->setText(QApplication::translate("aboutBox", "V1.0 - 01/22/2019", nullptr));
        label_5->setText(QApplication::translate("aboutBox", "<html><head/><body><p><a href=\"https://vberthet.me/\"><span style=\" text-decoration: underline; color:#00aa7f;\">https:://vberthet.me</span></a></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("aboutBox", "\302\251 Vincent Berthet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutBox: public Ui_aboutBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTBOX_H
