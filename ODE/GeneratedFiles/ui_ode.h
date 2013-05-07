/********************************************************************************
** Form generated from reading UI file 'ode.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ODE_H
#define UI_ODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ODEClass
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QDoubleSpinBox *ballVxBox;
    QDoubleSpinBox *ballVyBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QRadioButton *ballEular;
    QRadioButton *ballMidPoint;
    QSpinBox *gunHeight;
    QLabel *label_4;
    QSpinBox *ballMassBox;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *ballPowerAmountMass;
    QLabel *label_8;
    QPushButton *ballStopBtn;
    QPushButton *ballStartBtn;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ODEClass)
    {
        if (ODEClass->objectName().isEmpty())
            ODEClass->setObjectName(QStringLiteral("ODEClass"));
        ODEClass->resize(1129, 762);
        centralWidget = new QWidget(ODEClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(820, 40, 291, 561));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        ballVxBox = new QDoubleSpinBox(tab);
        ballVxBox->setObjectName(QStringLiteral("ballVxBox"));
        ballVxBox->setGeometry(QRect(80, 110, 62, 25));
        ballVxBox->setMaximum(360.99);
        ballVxBox->setValue(10);
        ballVyBox = new QDoubleSpinBox(tab);
        ballVyBox->setObjectName(QStringLiteral("ballVyBox"));
        ballVyBox->setGeometry(QRect(220, 110, 62, 25));
        ballVyBox->setValue(30);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 101, 19));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 110, 61, 19));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 110, 81, 19));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 310, 211, 171));
        ballEular = new QRadioButton(groupBox);
        ballEular->setObjectName(QStringLiteral("ballEular"));
        ballEular->setGeometry(QRect(20, 30, 119, 23));
        ballEular->setChecked(true);
        ballMidPoint = new QRadioButton(groupBox);
        ballMidPoint->setObjectName(QStringLiteral("ballMidPoint"));
        ballMidPoint->setGeometry(QRect(20, 70, 119, 23));
        gunHeight = new QSpinBox(tab);
        gunHeight->setObjectName(QStringLiteral("gunHeight"));
        gunHeight->setGeometry(QRect(83, 60, 71, 25));
        gunHeight->setValue(10);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 60, 66, 19));
        ballMassBox = new QSpinBox(tab);
        ballMassBox->setObjectName(QStringLiteral("ballMassBox"));
        ballMassBox->setGeometry(QRect(83, 200, 71, 25));
        ballMassBox->setMaximum(9999);
        ballMassBox->setValue(1000);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 160, 66, 19));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 200, 66, 19));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 240, 66, 19));
        ballPowerAmountMass = new QSpinBox(tab);
        ballPowerAmountMass->setObjectName(QStringLiteral("ballPowerAmountMass"));
        ballPowerAmountMass->setGeometry(QRect(160, 260, 71, 25));
        ballPowerAmountMass->setValue(3);
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 260, 121, 19));
        ballStopBtn = new QPushButton(tab);
        ballStopBtn->setObjectName(QStringLiteral("ballStopBtn"));
        ballStopBtn->setGeometry(QRect(20, 490, 112, 34));
        ballStartBtn = new QPushButton(tab);
        ballStartBtn->setObjectName(QStringLiteral("ballStartBtn"));
        ballStartBtn->setGeometry(QRect(160, 490, 112, 34));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        ODEClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ODEClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1129, 31));
        ODEClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ODEClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ODEClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ODEClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ODEClass->setStatusBar(statusBar);

        retranslateUi(ODEClass);
        QObject::connect(ballStartBtn, SIGNAL(clicked()), ODEClass, SLOT(BallStartPlay()));
        QObject::connect(ballStopBtn, SIGNAL(clicked()), ODEClass, SLOT(BallStopPlay()));
        QObject::connect(ballEular, SIGNAL(clicked()), ODEClass, SLOT(BallSetEularMethod()));
        QObject::connect(ballMidPoint, SIGNAL(clicked()), ODEClass, SLOT(BallSetMidPointMethod()));

        QMetaObject::connectSlotsByName(ODEClass);
    } // setupUi

    void retranslateUi(QMainWindow *ODEClass)
    {
        ODEClass->setWindowTitle(QApplication::translate("ODEClass", "ODE", 0));
        label->setText(QApplication::translate("ODEClass", "Gun Barrel", 0));
        label_2->setText(QApplication::translate("ODEClass", "Azimuth", 0));
        label_3->setText(QApplication::translate("ODEClass", "Elevation", 0));
        groupBox->setTitle(QApplication::translate("ODEClass", "Integral Method", 0));
        ballEular->setText(QApplication::translate("ODEClass", "Eular", 0));
        ballMidPoint->setText(QApplication::translate("ODEClass", "Mid Point", 0));
        label_4->setText(QApplication::translate("ODEClass", "Height", 0));
        label_5->setText(QApplication::translate("ODEClass", "Projectile", 0));
        label_6->setText(QApplication::translate("ODEClass", "Mass", 0));
        label_7->setText(QApplication::translate("ODEClass", "Force", 0));
        label_8->setText(QApplication::translate("ODEClass", "Powder Amount", 0));
        ballStopBtn->setText(QApplication::translate("ODEClass", "Stop", 0));
        ballStartBtn->setText(QApplication::translate("ODEClass", "Play", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ODEClass", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ODEClass", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class ODEClass: public Ui_ODEClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ODE_H
