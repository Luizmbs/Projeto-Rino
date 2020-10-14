#include "NAO.h"
#include "GoalKeeper.h"
		
GoalKeeper::GoalKeeper(){}

GoalKeeper::GoalKeeper(Estado InitialState)
{
	this->RobotState.x = InitialState.x;
	this->RobotState.y = InitialState.y;
	this->RobotState.theta = InitialState.theta;
}

GoalKeeper::~GoalKeeper(){}

void GoalKeeper::moveToBall(Estado BallState)
{
	float distance,y_distance;
	float bearing,dx,dy;
	float tau=0,time,dt = 0.1;

	dx = BallState.x - this->RobotState.x;
	dy = BallState.y - this->RobotState.y;

	distance = sqrt(pow(dx,2) + pow(dy,2));
	bearing = atanf(dy/dx); //Não entendi

	y_distance = distance*sin(bearing);
	time = y_distance/v_y;

	while(tau<=time)
	{
		this->RobotState.y+= v_y*dt;

		cout << "Robo se movendo para bloquear a bola, x =" << this->RobotState.x << "m, y = " << this->RobotState.y << "m, tempo = "<< tau << "s." << endl;
		tau = tau + dt;
		sleep_for(seconds(1));
	}
	cout << "Goleiro defendeu a bola!" << endl;
}
//Ola está tudo bem