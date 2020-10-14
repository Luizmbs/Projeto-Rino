#ifndef NAO_H
#define NAO_H

#include <iostream>
#include "math.h"
#include "stdlib.h"
#include <thread>
#include <chrono>
using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; //

//DEFINES 
#define length 9 // comprimento do campo em cm
#define width 6 // largura do campo em cm

//Struct
struct Estado
{
  float x,y,theta;
};

//CLASS
class NAO
{
	public:

	//ATRIBUTOS
	Estado RobotState;

	//CONSTRUTORES E DESTRUTORES
	NAO();
	NAO(Estado InitialState);
	~NAO();

	//GETTERS E SETTER
	void setState(Estado State);
	void getState(Estado State);

	//MÉTODOS
	void balldetect(Estado &BallState);
	virtual void moveToBall();
};

#endif	