#include "mainmenu.h"

#include "mvform.h"

#include <QGraphicsView>
#include <QGraphicsProxyWidget>
#include <QtCore>
#include <QPalette>
#include <QPushButton>
#include <QProgressDialog>
#include "mvmenu.h"
MainMenu::MainMenu(QObject *parent) : QGraphicsScene(parent)
{
    //QPalette p;
    setBackgroundBrush(QBrush(QColor(100,50,100)));
    QPushButton * button = new QPushButton(trUtf8("Start"), 0);
    QGraphicsProxyWidget * item = addWidget(button);
    button->show();
    QTransform transform = item->transform();
    transform.translate(50., -50.);
    transform.scale(5.,5.);
    item->setTransform(transform);
    connect(button,SIGNAL(clicked()),this,SLOT(btnStartClicked()));

    button = new QPushButton(trUtf8("Settings"), 0);
    item = addWidget(button);
    button->show();
    transform = item->transform();
    transform.translate(50., 90.);
    transform.scale(5., 5.);
    item->setTransform(transform);
    connect(button,SIGNAL(clicked()),this,SLOT(btnSettingsClicked()));
}

void MainMenu::btnStartClicked()
{
    MvForm * window = new MvForm;
    window->show();
}

void MainMenu::btnSettingsClicked()
{
    QWidget * window = new QWidget;
    window->setWindowTitle("Settings");
    window->setGeometry(500,100,200,330);
    window->setStyleSheet("background-color:darkgrey;");

    QPushButton * button = new QPushButton(trUtf8("Grass"), window);
    button->setGeometry(50,60,100,50);
    button->setStyleSheet("background-color:lime;");

    QPushButton * button2 = new QPushButton(trUtf8("Lava"), window);
    button2->setGeometry(50,140,100,50);
    button2->setStyleSheet("background-color:red;");

    QPushButton * button3 = new QPushButton(trUtf8("Mine"), window);
    button3->setGeometry(50,220,100,50);
    button3->setStyleSheet("background-color:grey;");

    window->show();
    button->show();
    button2->show();
    button3->show();
}

