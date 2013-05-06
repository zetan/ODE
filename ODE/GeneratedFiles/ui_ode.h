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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ODEClass
{
public:
    QWidget *centralWidget;
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

        QMetaObject::connectSlotsByName(ODEClass);
    } // setupUi

    void retranslateUi(QMainWindow *ODEClass)
    {
        ODEClass->setWindowTitle(QApplication::translate("ODEClass", "ODE", 0));
    } // retranslateUi

};

namespace Ui {
    class ODEClass: public Ui_ODEClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ODE_H
