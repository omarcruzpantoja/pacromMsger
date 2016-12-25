/********************************************************************************
** Form generated from reading UI file 'chatgui.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATGUI_H
#define UI_CHATGUI_H

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

class Ui_chatGUI
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *chatGUI)
    {
        if (chatGUI->objectName().isEmpty())
            chatGUI->setObjectName(QStringLiteral("chatGUI"));
        chatGUI->resize(400, 300);
        centralWidget = new QWidget(chatGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        chatGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(chatGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        chatGUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(chatGUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        chatGUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(chatGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        chatGUI->setStatusBar(statusBar);

        retranslateUi(chatGUI);

        QMetaObject::connectSlotsByName(chatGUI);
    } // setupUi

    void retranslateUi(QMainWindow *chatGUI)
    {
        chatGUI->setWindowTitle(QApplication::translate("chatGUI", "chatGUI", 0));
    } // retranslateUi

};

namespace Ui {
    class chatGUI: public Ui_chatGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATGUI_H
