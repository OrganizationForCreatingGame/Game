#include <QApplication>
#include "mvform.h"
#include "mvmenu.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

        mvmenu * menuWindow = new mvmenu;
        menuWindow->show();
        return app.exec();

}

