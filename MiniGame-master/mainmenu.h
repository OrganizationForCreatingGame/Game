#ifndef MAINMENU_H
#define MAINMENU_H
#include <QGraphicsScene>

class MainMenu: public QGraphicsScene
{
    Q_OBJECT
public:
    MainMenu(QObject *parent = 0);
   public slots: void btnStartClicked();
                 void btnSettingsClicked();
};

#endif // MAINMENU_H
