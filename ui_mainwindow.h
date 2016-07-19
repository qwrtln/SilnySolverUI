/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "inc/glview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *solveButton;
    QTextEdit *solutionField;
    QComboBox *solutionComboBox;
    QPushButton *RandomizeButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *depthMinInputLabel;
    QSpinBox *depthMinInputBox;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *depthMaxLabel;
    QSpinBox *depthMaxInputBox;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *numberOfSolutionsLabel;
    QSpinBox *numberOfSolutionsSpinBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *LMoveButton;
    QPushButton *MHLMoveButton;
    QPushButton *UMoveButton;
    QPushButton *MVFMoveButton;
    QPushButton *MVMoveButton;
    QPushButton *UReverseMoveButton;
    QPushButton *U2MoveButton;
    QPushButton *MVBMoveButton;
    QPushButton *MHRMoveButton;
    QPushButton *MHMoveButton;
    QPushButton *FMoveButton;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *playButton;
    QPushButton *pauseButton;
    QPushButton *moveBackButton;
    QPushButton *moveForwardButton;
    QPushButton *resetButton;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
     GLView *openGLWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(724, 471);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        solveButton = new QPushButton(centralWidget);
        solveButton->setObjectName(QStringLiteral("solveButton"));
        solveButton->setGeometry(QRect(300, 360, 75, 23));
        solutionField = new QTextEdit(centralWidget);
        solutionField->setObjectName(QStringLiteral("solutionField"));
        solutionField->setGeometry(QRect(30, 80, 161, 271));
        solutionComboBox = new QComboBox(centralWidget);
        solutionComboBox->setObjectName(QStringLiteral("solutionComboBox"));
        solutionComboBox->setGeometry(QRect(28, 30, 161, 22));
        RandomizeButton = new QPushButton(centralWidget);
        RandomizeButton->setObjectName(QStringLiteral("RandomizeButton"));
        RandomizeButton->setGeometry(QRect(530, 390, 75, 23));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(210, 310, 117, 25));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        depthMinInputLabel = new QLabel(horizontalLayoutWidget);
        depthMinInputLabel->setObjectName(QStringLiteral("depthMinInputLabel"));

        horizontalLayout_2->addWidget(depthMinInputLabel);

        depthMinInputBox = new QSpinBox(horizontalLayoutWidget);
        depthMinInputBox->setObjectName(QStringLiteral("depthMinInputBox"));
        depthMinInputBox->setMaximum(50);

        horizontalLayout_2->addWidget(depthMinInputBox);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(350, 310, 121, 25));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        depthMaxLabel = new QLabel(horizontalLayoutWidget_2);
        depthMaxLabel->setObjectName(QStringLiteral("depthMaxLabel"));

        horizontalLayout_3->addWidget(depthMaxLabel);

        depthMaxInputBox = new QSpinBox(horizontalLayoutWidget_2);
        depthMaxInputBox->setObjectName(QStringLiteral("depthMaxInputBox"));

        horizontalLayout_3->addWidget(depthMaxInputBox);

        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(210, 270, 177, 25));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        numberOfSolutionsLabel = new QLabel(horizontalLayoutWidget_3);
        numberOfSolutionsLabel->setObjectName(QStringLiteral("numberOfSolutionsLabel"));

        horizontalLayout_4->addWidget(numberOfSolutionsLabel);

        numberOfSolutionsSpinBox = new QSpinBox(horizontalLayoutWidget_3);
        numberOfSolutionsSpinBox->setObjectName(QStringLiteral("numberOfSolutionsSpinBox"));

        horizontalLayout_4->addWidget(numberOfSolutionsSpinBox);

        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(490, 150, 281, 211));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        LMoveButton = new QPushButton(gridLayoutWidget);
        LMoveButton->setObjectName(QStringLiteral("LMoveButton"));

        gridLayout->addWidget(LMoveButton, 0, 0, 1, 1);

        MHLMoveButton = new QPushButton(gridLayoutWidget);
        MHLMoveButton->setObjectName(QStringLiteral("MHLMoveButton"));

        gridLayout->addWidget(MHLMoveButton, 4, 0, 1, 1);

        UMoveButton = new QPushButton(gridLayoutWidget);
        UMoveButton->setObjectName(QStringLiteral("UMoveButton"));

        gridLayout->addWidget(UMoveButton, 1, 0, 1, 1);

        MVFMoveButton = new QPushButton(gridLayoutWidget);
        MVFMoveButton->setObjectName(QStringLiteral("MVFMoveButton"));

        gridLayout->addWidget(MVFMoveButton, 4, 1, 1, 1);

        MVMoveButton = new QPushButton(gridLayoutWidget);
        MVMoveButton->setObjectName(QStringLiteral("MVMoveButton"));

        gridLayout->addWidget(MVMoveButton, 2, 1, 1, 1);

        UReverseMoveButton = new QPushButton(gridLayoutWidget);
        UReverseMoveButton->setObjectName(QStringLiteral("UReverseMoveButton"));

        gridLayout->addWidget(UReverseMoveButton, 1, 1, 1, 1);

        U2MoveButton = new QPushButton(gridLayoutWidget);
        U2MoveButton->setObjectName(QStringLiteral("U2MoveButton"));

        gridLayout->addWidget(U2MoveButton, 2, 0, 1, 1);

        MVBMoveButton = new QPushButton(gridLayoutWidget);
        MVBMoveButton->setObjectName(QStringLiteral("MVBMoveButton"));

        gridLayout->addWidget(MVBMoveButton, 5, 0, 1, 1);

        MHRMoveButton = new QPushButton(gridLayoutWidget);
        MHRMoveButton->setObjectName(QStringLiteral("MHRMoveButton"));

        gridLayout->addWidget(MHRMoveButton, 3, 0, 1, 1);

        MHMoveButton = new QPushButton(gridLayoutWidget);
        MHMoveButton->setObjectName(QStringLiteral("MHMoveButton"));

        gridLayout->addWidget(MHMoveButton, 3, 1, 1, 1);

        FMoveButton = new QPushButton(gridLayoutWidget);
        FMoveButton->setObjectName(QStringLiteral("FMoveButton"));

        gridLayout->addWidget(FMoveButton, 0, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(550, 30, 181, 80));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        playButton = new QPushButton(gridLayoutWidget_2);
        playButton->setObjectName(QStringLiteral("playButton"));

        gridLayout_2->addWidget(playButton, 0, 0, 1, 1);

        pauseButton = new QPushButton(gridLayoutWidget_2);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));

        gridLayout_2->addWidget(pauseButton, 0, 1, 1, 1);

        moveBackButton = new QPushButton(gridLayoutWidget_2);
        moveBackButton->setObjectName(QStringLiteral("moveBackButton"));

        gridLayout_2->addWidget(moveBackButton, 1, 0, 1, 1);

        moveForwardButton = new QPushButton(gridLayoutWidget_2);
        moveForwardButton->setObjectName(QStringLiteral("moveForwardButton"));

        gridLayout_2->addWidget(moveForwardButton, 1, 1, 1, 1);

        resetButton = new QPushButton(centralWidget);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setGeometry(QRect(620, 390, 75, 23));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(480, 130, 241, 241));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(200, 250, 271, 101));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(540, 10, 181, 111));
        openGLWidget = new GLView(centralWidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setGeometry(QRect(200, 10, 271, 211));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 724, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        solveButton->setText(QApplication::translate("MainWindow", "Solve", 0));
        solutionComboBox->clear();
        solutionComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
        );
        RandomizeButton->setText(QApplication::translate("MainWindow", "Randomize", 0));
        depthMinInputLabel->setText(QApplication::translate("MainWindow", "Min Depth", 0));
        depthMaxLabel->setText(QApplication::translate("MainWindow", "Max Depth", 0));
        numberOfSolutionsLabel->setText(QApplication::translate("MainWindow", "Number of solutions", 0));
        LMoveButton->setText(QApplication::translate("MainWindow", "Left", 0));
        MHLMoveButton->setText(QApplication::translate("MainWindow", "Middle horizontal left", 0));
        UMoveButton->setText(QApplication::translate("MainWindow", "Up", 0));
        MVFMoveButton->setText(QApplication::translate("MainWindow", "Middle vertical front", 0));
        MVMoveButton->setText(QApplication::translate("MainWindow", "Middle Vertical", 0));
        UReverseMoveButton->setText(QApplication::translate("MainWindow", "Up'", 0));
        U2MoveButton->setText(QApplication::translate("MainWindow", "Up2", 0));
        MVBMoveButton->setText(QApplication::translate("MainWindow", "Middle vertical back", 0));
        MHRMoveButton->setText(QApplication::translate("MainWindow", "Middle horizontal right", 0));
        MHMoveButton->setText(QApplication::translate("MainWindow", "Middle horizontal", 0));
        FMoveButton->setText(QApplication::translate("MainWindow", "Front", 0));
        playButton->setText(QApplication::translate("MainWindow", "Play", 0));
        pauseButton->setText(QApplication::translate("MainWindow", "Pause", 0));
        moveBackButton->setText(QApplication::translate("MainWindow", "Move Back", 0));
        moveForwardButton->setText(QApplication::translate("MainWindow", "Move Forward", 0));
        resetButton->setText(QApplication::translate("MainWindow", "Reset", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Moves", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Solver", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Animation", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
