#include <iostream>
#include "NAO.h"
#include "GoalKeeper.h"

int main()
{
	Estado State, BallState;

	State.x = 0;
	State.y = 0;
	State.theta = 0;

	GoalKeeper Dino;

	Dino.setState(State);

	Dino.balldetect(BallState);

	Dino.moveToBall(BallState);
	
}