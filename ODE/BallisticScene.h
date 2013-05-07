#ifndef BALLISTIC_SCENE_H
#define BALLISTIC_SCENE_H
#include "ball.h"
#include "TraceBall.h"
#include "Floor.h"
#include <vector>

using namespace std;

enum STATUS{NONE, PLAY};
class BallisticScene
{
public:
	BallisticScene(){status = STATUS::NONE;}
	~BallisticScene(){}
	void Update();
	void Draw();
	void Setup();

    void StartPlay();
	void StopPlay();

	void SetBallHeight(int height){ball.setPos(0, height, 0);}
	void SetBallVelocity(GLfloat x, GLfloat y, GLfloat z){ball.setvelocity(x, y, z);}
protected:
private:
	Ball ball;
	vector<TraceBall> traceBallVec;
	vector<TraceBall> shadowVec;
	Floor floor;
	STATUS status;
};
#endif