#include <QtWidgets\qapplication.h>
#include <QtWidgets\qwidget.h>
#include "ScratchpadGame.h"

int main(int argc,char* argv[])
{
	QApplication app(argc, argv);
	QWidget widget;
	widget.show();
	return app.exec();
}