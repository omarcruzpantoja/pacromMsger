#ifndef LOCALGUI_H
#define LOCALGUI_H

#include <QMainWindow>
#include <QDebug>

namespace Ui {
class localGUI;
}

class loginGUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginGUI(QWidget *parent = 0);
    ~loginGUI();

private slots:


    void on_localConnect_clicked();

private:
    Ui::localGUI *ui;
};

#endif // LOCALGUI_H
