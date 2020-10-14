#ifndef GOALKEEPER_H
#define GOALKEEPER_H

#include "NAO.h"


//DEFINES 
#define v_y 2 // velocidade linear 2 m/s
//CLASS
class GoalKeeper : public NAO
{
	public:
		
		//CONSTRUTORES
		GoalKeeper();
		GoalKeeper(Estado InitialState);
		~GoalKeeper();
		//MÉTODOS
		virtual void moveToBall(Estado BallState);
};

#endif