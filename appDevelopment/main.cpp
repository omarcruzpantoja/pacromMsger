#include "chatgui.h"
#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    chatGUI w;
    loginGUI test ;
    test.show() ;

   // w.show();

    return a.exec();
}
