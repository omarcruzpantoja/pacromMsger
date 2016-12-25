#include "login.h"
#include "ui_login.h"

loginGUI::loginGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::localGUI)
{
    ui->setupUi(this);

    this->setFixedSize(461,366);



}

loginGUI::~loginGUI()
{
    delete ui;
}


void loginGUI::on_localConnect_clicked()
{
    qDebug() << " HAI" ;
}
