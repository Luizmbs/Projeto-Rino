#include "NAO.h"


NAO::NAO(){}

NAO::NAO(Estado InitialState)
{
	this->RobotState.x = InitialState.x;
	this->RobotState.y = InitialState.y;
	this->RobotState.theta = InitialState.theta;
}

NAO::~NAO(){}

void NAO::setState(Estado State)
{
	this->RobotState.x = State.x;
	this->RobotState.y = State.y;
	this->RobotState.theta = State.theta;
}

void NAO::getState(Estado State)
{
	State.x = this->RobotState.x;
	State.y = this->RobotState.y;
	State.theta = this->RobotState.theta;
}

void NAO::balldetect(Estado &BallState)
{
				BallState.x = rand() % length;
				BallState.y = rand() % width; 
				BallState.theta = atan(BallState.y/BallState.x);

				cout << "Bola encontrada em x = " << BallState.x
				<< " y = " << BallState.y<< endl;
				cout << "Angulo da bola em relação ao robô, theta = " << BallState.theta << " rad " << endl;
}

void NAO::moveToBall(){}