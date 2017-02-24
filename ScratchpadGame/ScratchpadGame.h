#ifndef SCRATCHPAD_GAME_SCRATCHPAD_GAME_H
#define SCRATCHPAD_GAME_SCRATCHPAD_GAME_H

class ScratchpadGame : public QOpenGLWidget
{
	GLuint vertexBufferID=0;
protected:
	void initializeGL() override;
	void paintGL() override;
};

#endif // !SCRATCHPAD_GAME_SCRATCHPAD_GAME_H
#define SCRATCHPAD_GAME_SCRATCHPAD_GAME_H
