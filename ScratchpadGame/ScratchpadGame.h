#ifndef SCRATCHPAD_GAME_SCRATCHPAD_GAME_H
#define SCRATCHPAD_GAME_SCRATCHPAD_GAME_H
#include <QtWidgets\qopenglwidget.h>
#include <QtCore/qtimer.h>
class ScratchpadGame : public QOpenGLWidget
{
	Q_OBJECT
	QTimer qtimer;
	GLuint vertexBufferID=0;
protected:
	void initializeGL() override;
	void paintGL() override;
	
	private slots:
	void timerUpdate();
};

#endif // !SCRATCHPAD_GAME_SCRATCHPAD_GAME_H
#define SCRATCHPAD_GAME_SCRATCHPAD_GAME_H
