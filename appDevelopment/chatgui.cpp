#include "chatgui.h"
#include "pacromLib.h"
#include "ui_chatgui.h"




chatGUI::chatGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chatGUI)
{
    ui->setupUi(this);
}

chatGUI::~chatGUI()
{
    delete ui;
    ;
}
