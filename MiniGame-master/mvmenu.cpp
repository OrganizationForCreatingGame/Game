#include "mvmenu.h"
#include "mainmenu.h"
#include <QtGui>

mvmenu::mvmenu(QWidget *parent):QMainWindow(parent)
{

    setupUi(this);
    setWindowTitle(trUtf8("Main_Menu"));
    menuScene = new MainMenu;
    graphicsView->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    graphicsView->setScene(menuScene);
}
