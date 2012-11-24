#ifndef MVMENU_H
#define MVMENU_H
#include <QMainWindow>
#include "ui_mainform.h"

class MainMenu;

class mvmenu: public QMainWindow, public Ui::MainWindow
{
    Q_OBJECT
public:
        mvmenu(QWidget *parent = 0);

private:
        MainMenu * menuScene;
};

#endif // MVMENU_H
