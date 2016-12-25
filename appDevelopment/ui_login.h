/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_localGUI
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *localTitle;
    QPushButton *localConnect;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QWidget *tab_2;
    QLabel *localTitle_2;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_5;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *forgotPw;
    QLabel *forgotPw_2;
    QPushButton *localConnect_2;
    QLabel *label_4;
    QLabel *forgotPw_3;
    QLabel *forgotPw_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *localGUI)
    {
        if (localGUI->objectName().isEmpty())
            localGUI->setObjectName(QStringLiteral("localGUI"));
        localGUI->resize(461, 366);
        centralWidget = new QWidget(localGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 461, 331));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        localTitle = new QLabel(tab);
        localTitle->setObjectName(QStringLiteral("localTitle"));
        localTitle->setGeometry(QRect(110, 0, 281, 51));
        QFont font;
        font.setPointSize(18);
        localTitle->setFont(font);
        localConnect = new QPushButton(tab);
        localConnect->setObjectName(QStringLiteral("localConnect"));
        localConnect->setGeometry(QRect(310, 200, 91, 41));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 50, 281, 251));
        QFont font1;
        font1.setPointSize(15);
        groupBox->setFont(font1);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 30, 241, 111));
        QFont font2;
        font2.setPointSize(13);
        groupBox_2->setFont(font2);
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 20, 221, 41));
        QFont font3;
        font3.setPointSize(10);
        label->setFont(font3);
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 70, 141, 31));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 140, 241, 111));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 30, 181, 21));
        label_3->setFont(font3);
        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 60, 181, 31));
        lineEdit_2->setFont(font2);
        tabWidget->addTab(tab, QString());
        localTitle->raise();
        groupBox->raise();
        localConnect->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        localTitle_2 = new QLabel(tab_2);
        localTitle_2->setObjectName(QStringLiteral("localTitle_2"));
        localTitle_2->setGeometry(QRect(120, 10, 211, 31));
        localTitle_2->setFont(font);
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 40, 251, 251));
        groupBox_4->setFont(font1);
        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 30, 211, 191));
        groupBox_5->setFont(font2);
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 181, 21));
        label_2->setFont(font3);
        lineEdit_3 = new QLineEdit(groupBox_5);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 60, 141, 31));
        lineEdit_4 = new QLineEdit(groupBox_5);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(10, 100, 141, 31));
        forgotPw = new QLabel(groupBox_5);
        forgotPw->setObjectName(QStringLiteral("forgotPw"));
        forgotPw->setGeometry(QRect(10, 150, 101, 16));
        QFont font4;
        font4.setPointSize(9);
        forgotPw->setFont(font4);
        forgotPw_2 = new QLabel(groupBox_5);
        forgotPw_2->setObjectName(QStringLiteral("forgotPw_2"));
        forgotPw_2->setGeometry(QRect(130, 150, 71, 16));
        forgotPw_2->setFont(font4);
        localConnect_2 = new QPushButton(tab_2);
        localConnect_2->setObjectName(QStringLiteral("localConnect_2"));
        localConnect_2->setGeometry(QRect(290, 200, 111, 41));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(270, 80, 121, 31));
        forgotPw_3 = new QLabel(tab_2);
        forgotPw_3->setObjectName(QStringLiteral("forgotPw_3"));
        forgotPw_3->setGeometry(QRect(270, 130, 171, 21));
        QFont font5;
        font5.setPointSize(12);
        forgotPw_3->setFont(font5);
        forgotPw_4 = new QLabel(tab_2);
        forgotPw_4->setObjectName(QStringLiteral("forgotPw_4"));
        forgotPw_4->setGeometry(QRect(280, 160, 121, 20));
        forgotPw_4->setFont(font4);
        tabWidget->addTab(tab_2, QString());
        localGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(localGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 461, 22));
        localGUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(localGUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        localGUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(localGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        localGUI->setStatusBar(statusBar);

        retranslateUi(localGUI);

        tabWidget->setCurrentIndex(1);
        localConnect->setDefault(true);
        localConnect_2->setDefault(true);


        QMetaObject::connectSlotsByName(localGUI);
    } // setupUi

    void retranslateUi(QMainWindow *localGUI)
    {
        localGUI->setWindowTitle(QApplication::translate("localGUI", "Pacrom login", 0));
        localTitle->setText(QApplication::translate("localGUI", "Local Messenger Log-In", 0));
        localConnect->setText(QApplication::translate("localGUI", "Connect", 0));
        groupBox->setTitle(QApplication::translate("localGUI", "Log In", 0));
        groupBox_2->setTitle(QApplication::translate("localGUI", "Username ", 0));
        label->setText(QApplication::translate("localGUI", "You will be seen in  the chat with this\n"
" name", 0));
        lineEdit->setPlaceholderText(QApplication::translate("localGUI", "username", 0));
        groupBox_3->setTitle(QApplication::translate("localGUI", "Address", 0));
        label_3->setText(QApplication::translate("localGUI", "Set the local IP Address", 0));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("localGUI", "Address (192.168.0.0)", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("localGUI", "Local Messenger", 0));
        localTitle_2->setText(QApplication::translate("localGUI", " Messenger Log-In", 0));
        groupBox_4->setTitle(QApplication::translate("localGUI", "Log In", 0));
        groupBox_5->setTitle(QApplication::translate("localGUI", "Username ", 0));
        label_2->setText(QApplication::translate("localGUI", "Login with username or email", 0));
        lineEdit_3->setPlaceholderText(QApplication::translate("localGUI", "username", 0));
        lineEdit_4->setPlaceholderText(QApplication::translate("localGUI", "password", 0));
        forgotPw->setText(QApplication::translate("localGUI", "Forgot Password?", 0));
        forgotPw_2->setText(QApplication::translate("localGUI", "What's  this?", 0));
        localConnect_2->setText(QApplication::translate("localGUI", "Connect", 0));
        label_4->setText(QApplication::translate("localGUI", "Wrong email/id or\n"
" password", 0));
        forgotPw_3->setText(QApplication::translate("localGUI", "Don't have an account?", 0));
        forgotPw_4->setText(QApplication::translate("localGUI", "Click here to register", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("localGUI", "Messenger", 0));
    } // retranslateUi

};

namespace Ui {
    class localGUI: public Ui_localGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
