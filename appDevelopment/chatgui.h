#ifndef CHATGUI_H
#define CHATGUI_H



#include <QMainWindow>

namespace Ui {
class chatGUI;
}

class chatGUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit chatGUI(QWidget *parent = 0);
    ~chatGUI();

private:
    Ui::chatGUI *ui;
};

#endif // CHATGUI_H
