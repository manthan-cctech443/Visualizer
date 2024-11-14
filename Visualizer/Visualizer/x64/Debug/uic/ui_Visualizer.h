/********************************************************************************
** Form generated from reading UI file 'Visualizer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALIZER_H
#define UI_VISUALIZER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisualizerClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VisualizerClass)
    {
        if (VisualizerClass->objectName().isEmpty())
            VisualizerClass->setObjectName(QString::fromUtf8("VisualizerClass"));
        VisualizerClass->resize(459, 400);
        centralWidget = new QWidget(VisualizerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 40, 75, 23));
        VisualizerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VisualizerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 459, 21));
        VisualizerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VisualizerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        VisualizerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VisualizerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        VisualizerClass->setStatusBar(statusBar);

        retranslateUi(VisualizerClass);

        QMetaObject::connectSlotsByName(VisualizerClass);
    } // setupUi

    void retranslateUi(QMainWindow *VisualizerClass)
    {
        VisualizerClass->setWindowTitle(QApplication::translate("VisualizerClass", "Visualizer", nullptr));
        pushButton->setText(QApplication::translate("VisualizerClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VisualizerClass: public Ui_VisualizerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALIZER_H
