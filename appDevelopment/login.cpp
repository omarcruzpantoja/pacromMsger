#include "login.h"
#include "pacromLib.h"
#include "ui_login.h"

loginGUI::loginGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::localGUI)
{
    ui->setupUi(this);

    this->setFixedSize(461,366);
    ui->errorLocalUN->setHidden(true) ;
    ui->errorLocalUN->setStyleSheet("QLabel {color:red}");

    ui->localServerR->setHidden(true) ;
    ui->localServerR->setStyleSheet("QLabel {color:red}");

}

loginGUI::~loginGUI()
{
    delete ui;
}


void loginGUI::on_localConnect_clicked()
{
    int socket = createSocket() ;

    std::string userName = ui->localUName->text().toUtf8().constData() ;
    std::string address = ui->localIPAddress->text().toUtf8().constData() ;

    char query[256] ;

    createPacket(query, "registerLocalChat", userName + ":" + address) ;

    write(socket, query, strlen(query)) ;
    char msg[256] ;
    bzero(msg, 256) ;
    read(socket, msg, 255) ;
    std::string message = msg ;
    ui->errorLocalUN->setHidden(true) ;
    if (message == "DUP")
        ui->errorLocalUN->setHidden(false) ;

    write(socket, "OK", strlen("OK")) ;
    bzero(msg,256) ;
    read(socket, msg, 255) ;

    message = msg ;
    ui->localServerR->setHidden(true);
    if (message == "AHK")
        ui->localServerR->setHidden(false);

}
