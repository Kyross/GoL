/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionClear;
    QAction *actionClear_2;
    QAction *actionQuit;
    QAction *actionSave;
    QAction *actionAbout;
    QAction *actionMaximized;
    QAction *actionNormal;
    QAction *actionParameters;
    QAction *actionHide_toolbar;
    QAction *actionGit;
    QAction *actionRun;
    QAction *actionPause;
    QAction *actione;
    QAction *actionClear_3;
    QAction *actionReset;
    QAction *actionHelp;
    QAction *actionReset_Universe;
    QAction *actionParameters_2;
    QAction *actionHide_parameters;
    QAction *actionClear_4;
    QAction *actionFull_Screen;
    QAction *actionCompact;
    QAction *actionReset_Timer;
    QAction *actionReset_Color;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *main_layout;
    QVBoxLayout *params_layout;
    QGroupBox *groupBox_params;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *generation_layout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *universe_label;
    QSpinBox *universe_spinBox;
    QSpacerItem *horizontalSpacer;
    QSlider *universe_slider;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *univers_layout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *generation_label;
    QSpinBox *timer_SpinBox;
    QSpacerItem *horizontalSpacer_2;
    QSlider *timer_slider;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *layout_boxgame;
    QGroupBox *groupBox_game;
    QGridLayout *gridLayout_2;
    QHBoxLayout *game_layout;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuWindow;
    QMenu *menuAbout;
    QMenu *menuOptions;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(626, 457);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/vb_black_bg_border_512.png"), QSize(), QIcon::Normal, QIcon::On);
        MainWindow->setWindowIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionNew->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/assets/i_file.png"), QSize(), QIcon::Normal, QIcon::On);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/assets/i_open.png"), QSize(), QIcon::Normal, QIcon::On);
        actionOpen->setIcon(icon2);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        actionClear_2 = new QAction(MainWindow);
        actionClear_2->setObjectName(QString::fromUtf8("actionClear_2"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/assets/i_save.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSave->setIcon(icon3);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout->setIcon(icon);
        actionMaximized = new QAction(MainWindow);
        actionMaximized->setObjectName(QString::fromUtf8("actionMaximized"));
        actionMaximized->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/assets/i_adjust.png"), QSize(), QIcon::Normal, QIcon::On);
        actionMaximized->setIcon(icon4);
        actionNormal = new QAction(MainWindow);
        actionNormal->setObjectName(QString::fromUtf8("actionNormal"));
        actionNormal->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/assets/i_default.png"), QSize(), QIcon::Normal, QIcon::On);
        actionNormal->setIcon(icon5);
        actionParameters = new QAction(MainWindow);
        actionParameters->setObjectName(QString::fromUtf8("actionParameters"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/i_params.png"), QSize(), QIcon::Normal, QIcon::On);
        actionParameters->setIcon(icon6);
        actionHide_toolbar = new QAction(MainWindow);
        actionHide_toolbar->setObjectName(QString::fromUtf8("actionHide_toolbar"));
        actionHide_toolbar->setCheckable(true);
        actionGit = new QAction(MainWindow);
        actionGit->setObjectName(QString::fromUtf8("actionGit"));
        actionRun = new QAction(MainWindow);
        actionRun->setObjectName(QString::fromUtf8("actionRun"));
        actionRun->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/assets/i_run_running.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun->setIcon(icon7);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        actionPause->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/assets/i_pause_paused.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon8);
        actione = new QAction(MainWindow);
        actione->setObjectName(QString::fromUtf8("actione"));
        actionClear_3 = new QAction(MainWindow);
        actionClear_3->setObjectName(QString::fromUtf8("actionClear_3"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/i_clear.png"), QSize(), QIcon::Normal, QIcon::On);
        actionClear_3->setIcon(icon9);
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/i_reset.png"), QSize(), QIcon::Normal, QIcon::On);
        actionReset->setIcon(icon10);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/assets/i_help.png"), QSize(), QIcon::Normal, QIcon::On);
        actionHelp->setIcon(icon11);
        actionReset_Universe = new QAction(MainWindow);
        actionReset_Universe->setObjectName(QString::fromUtf8("actionReset_Universe"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/assets/i_reset.png"), QSize(), QIcon::Normal, QIcon::On);
        actionReset_Universe->setIcon(icon12);
        actionParameters_2 = new QAction(MainWindow);
        actionParameters_2->setObjectName(QString::fromUtf8("actionParameters_2"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/assets/i_params.png"), QSize(), QIcon::Normal, QIcon::On);
        actionParameters_2->setIcon(icon13);
        actionHide_parameters = new QAction(MainWindow);
        actionHide_parameters->setObjectName(QString::fromUtf8("actionHide_parameters"));
        actionHide_parameters->setCheckable(true);
        actionClear_4 = new QAction(MainWindow);
        actionClear_4->setObjectName(QString::fromUtf8("actionClear_4"));
        actionClear_4->setEnabled(false);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/assets/i_clear.png"), QSize(), QIcon::Normal, QIcon::On);
        actionClear_4->setIcon(icon14);
        actionFull_Screen = new QAction(MainWindow);
        actionFull_Screen->setObjectName(QString::fromUtf8("actionFull_Screen"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/assets/i_fullscreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFull_Screen->setIcon(icon15);
        actionCompact = new QAction(MainWindow);
        actionCompact->setObjectName(QString::fromUtf8("actionCompact"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/assets/i_compact.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCompact->setIcon(icon16);
        actionReset_Timer = new QAction(MainWindow);
        actionReset_Timer->setObjectName(QString::fromUtf8("actionReset_Timer"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/assets/i_reset_timer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReset_Timer->setIcon(icon17);
        actionReset_Color = new QAction(MainWindow);
        actionReset_Color->setObjectName(QString::fromUtf8("actionReset_Color"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/assets/i_reset_color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReset_Color->setIcon(icon18);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        main_layout = new QVBoxLayout();
        main_layout->setSpacing(6);
        main_layout->setObjectName(QString::fromUtf8("main_layout"));
        params_layout = new QVBoxLayout();
        params_layout->setSpacing(6);
        params_layout->setObjectName(QString::fromUtf8("params_layout"));
        groupBox_params = new QGroupBox(centralWidget);
        groupBox_params->setObjectName(QString::fromUtf8("groupBox_params"));
        groupBox_params->setMaximumSize(QSize(16777215, 100));
        groupBox_params->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(groupBox_params);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        generation_layout = new QHBoxLayout();
        generation_layout->setSpacing(6);
        generation_layout->setObjectName(QString::fromUtf8("generation_layout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        generation_layout->addItem(horizontalSpacer_3);

        universe_label = new QLabel(groupBox_params);
        universe_label->setObjectName(QString::fromUtf8("universe_label"));
        universe_label->setMinimumSize(QSize(100, 0));

        generation_layout->addWidget(universe_label);

        universe_spinBox = new QSpinBox(groupBox_params);
        universe_spinBox->setObjectName(QString::fromUtf8("universe_spinBox"));
        universe_spinBox->setMinimum(0);
        universe_spinBox->setMaximum(400);
        universe_spinBox->setValue(0);

        generation_layout->addWidget(universe_spinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        generation_layout->addItem(horizontalSpacer);

        universe_slider = new QSlider(groupBox_params);
        universe_slider->setObjectName(QString::fromUtf8("universe_slider"));
        universe_slider->setMinimum(0);
        universe_slider->setMaximum(99);
        universe_slider->setValue(0);
        universe_slider->setOrientation(Qt::Horizontal);

        generation_layout->addWidget(universe_slider);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        generation_layout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(generation_layout);

        univers_layout = new QHBoxLayout();
        univers_layout->setSpacing(6);
        univers_layout->setObjectName(QString::fromUtf8("univers_layout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        univers_layout->addItem(horizontalSpacer_5);

        generation_label = new QLabel(groupBox_params);
        generation_label->setObjectName(QString::fromUtf8("generation_label"));
        generation_label->setMinimumSize(QSize(100, 0));

        univers_layout->addWidget(generation_label);

        timer_SpinBox = new QSpinBox(groupBox_params);
        timer_SpinBox->setObjectName(QString::fromUtf8("timer_SpinBox"));
        timer_SpinBox->setMinimumSize(QSize(66, 0));
        timer_SpinBox->setMinimum(0);
        timer_SpinBox->setMaximum(99);
        timer_SpinBox->setValue(0);

        univers_layout->addWidget(timer_SpinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        univers_layout->addItem(horizontalSpacer_2);

        timer_slider = new QSlider(groupBox_params);
        timer_slider->setObjectName(QString::fromUtf8("timer_slider"));
        timer_slider->setMinimum(0);
        timer_slider->setMaximum(500);
        timer_slider->setValue(0);
        timer_slider->setOrientation(Qt::Horizontal);

        univers_layout->addWidget(timer_slider);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        univers_layout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(univers_layout);


        params_layout->addWidget(groupBox_params);


        main_layout->addLayout(params_layout);

        layout_boxgame = new QHBoxLayout();
        layout_boxgame->setSpacing(6);
        layout_boxgame->setObjectName(QString::fromUtf8("layout_boxgame"));
        groupBox_game = new QGroupBox(centralWidget);
        groupBox_game->setObjectName(QString::fromUtf8("groupBox_game"));
        gridLayout_2 = new QGridLayout(groupBox_game);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        game_layout = new QHBoxLayout();
        game_layout->setSpacing(6);
        game_layout->setObjectName(QString::fromUtf8("game_layout"));

        gridLayout_2->addLayout(game_layout, 0, 0, 1, 1);


        layout_boxgame->addWidget(groupBox_game);


        main_layout->addLayout(layout_boxgame);


        gridLayout->addLayout(main_layout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 626, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuFile->setFocusPolicy(Qt::NoFocus);
        menuFile->setTearOffEnabled(false);
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setEnabled(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionRun);
        menuFile->addAction(actionPause);
        menuFile->addSeparator();
        menuFile->addAction(actionClear_4);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuWindow->addAction(actionMaximized);
        menuWindow->addAction(actionFull_Screen);
        menuWindow->addAction(actionNormal);
        menuWindow->addSeparator();
        menuWindow->addAction(actionHide_toolbar);
        menuWindow->addAction(actionHide_parameters);
        menuAbout->addAction(actionAbout);
        menuAbout->addAction(actionHelp);
        menuOptions->addAction(actionReset_Universe);
        menuOptions->addAction(actionReset_Timer);
        menuOptions->addAction(actionReset_Color);
        menuOptions->addSeparator();
        menuOptions->addAction(actionParameters_2);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRun);
        mainToolBar->addAction(actionPause);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionClear_4);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Game of Life", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("MainWindow", "New (Ctrl+N)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("MainWindow", "Open...", nullptr));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "Open (Ctrl+O)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionClear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        actionClear_2->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save...", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "Save (Ctrl+S)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("MainWindow", "About GoL...", nullptr));
        actionMaximized->setText(QApplication::translate("MainWindow", "Maximized", nullptr));
#ifndef QT_NO_SHORTCUT
        actionMaximized->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_NO_SHORTCUT
        actionNormal->setText(QApplication::translate("MainWindow", "Normal", nullptr));
        actionParameters->setText(QApplication::translate("MainWindow", "options boutons", nullptr));
        actionHide_toolbar->setText(QApplication::translate("MainWindow", "Hide toolbar", nullptr));
        actionGit->setText(QApplication::translate("MainWindow", "Git", nullptr));
        actionRun->setText(QApplication::translate("MainWindow", "Run", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRun->setToolTip(QApplication::translate("MainWindow", "Run (F5)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionRun->setShortcut(QApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_NO_SHORTCUT
        actionPause->setText(QApplication::translate("MainWindow", "Pause", nullptr));
#ifndef QT_NO_TOOLTIP
        actionPause->setToolTip(QApplication::translate("MainWindow", "Pause (F6)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionPause->setShortcut(QApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_NO_SHORTCUT
        actione->setText(QApplication::translate("MainWindow", "e", nullptr));
        actionClear_3->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        actionReset->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        actionHelp->setText(QApplication::translate("MainWindow", "Help...", nullptr));
        actionReset_Universe->setText(QApplication::translate("MainWindow", "Reset Universe", nullptr));
#ifndef QT_NO_SHORTCUT
        actionReset_Universe->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_NO_SHORTCUT
        actionParameters_2->setText(QApplication::translate("MainWindow", "Parameters...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionParameters_2->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        actionHide_parameters->setText(QApplication::translate("MainWindow", "Hide parameters", nullptr));
        actionClear_4->setText(QApplication::translate("MainWindow", "Clear", nullptr));
#ifndef QT_NO_TOOLTIP
        actionClear_4->setToolTip(QApplication::translate("MainWindow", "Clear (F7)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionClear_4->setShortcut(QApplication::translate("MainWindow", "F7", nullptr));
#endif // QT_NO_SHORTCUT
        actionFull_Screen->setText(QApplication::translate("MainWindow", "Fullscreen", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFull_Screen->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionCompact->setText(QApplication::translate("MainWindow", "Compact", nullptr));
        actionReset_Timer->setText(QApplication::translate("MainWindow", "Reset Timer", nullptr));
#ifndef QT_NO_SHORTCUT
        actionReset_Timer->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_NO_SHORTCUT
        actionReset_Color->setText(QApplication::translate("MainWindow", "Reset Color", nullptr));
#ifndef QT_NO_SHORTCUT
        actionReset_Color->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        groupBox_params->setTitle(QApplication::translate("MainWindow", "Parameters", nullptr));
        universe_label->setText(QApplication::translate("MainWindow", "Universe size", nullptr));
        universe_spinBox->setSuffix(QApplication::translate("MainWindow", " cells", nullptr));
        generation_label->setText(QApplication::translate("MainWindow", "Generation interval", nullptr));
        timer_SpinBox->setSuffix(QApplication::translate("MainWindow", " ms  ", nullptr));
        groupBox_game->setTitle(QApplication::translate("MainWindow", "Game", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
        menuWindow->setTitle(QApplication::translate("MainWindow", "&Window", nullptr));
        menuAbout->setTitle(QApplication::translate("MainWindow", "&About", nullptr));
        menuOptions->setTitle(QApplication::translate("MainWindow", "&Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
