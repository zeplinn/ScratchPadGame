#include <gl\glew.h>
#include <cassert>
#include <QtWidgets\qapplication.h>
#include <QtWidgets\qopenglwidget.h>
#include "ScratchpadGame.h"
void ScratchpadGame::initializeGL()
{
	if(glewInit()==0){
		assert("glew faild to initialize");
	}

	glGenBuffers(1, &vertexBufferID);
	glBindBuffer(GL_ARRAY_BUFFER, vertexBufferID);
	float verts[] = {
		+0.0f, +0.1f,
		-0.1f, -0.1f,
		+0.1f, -0.1f
	};
	glBufferData(GL_ARRAY_BUFFER, sizeof(verts), verts, GL_STATIC_DRAW);

}
void ScratchpadGame::paintGL()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, nullptr);;
	glDrawArrays(GL_TRIANGLES, 0, 3);
}
int main(int argc,char* argv[])
{
	QApplication app(argc, argv);
	ScratchpadGame widget;
	widget.show();
	return app.exec();
}