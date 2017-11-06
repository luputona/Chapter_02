#include"Car.h"
#include<cstring>
#include<iostream>
using namespace std;

void Car::InitMembers3(char *ID, int fuel)
{
	strcpy_s(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}
void Car::ShowCarState3()
{
	cout << "소유자 :ID " << gamerID << endl;
	cout << "연료량 : " << fuelGauge << "%" << endl;
	cout << "현재 속도: " << curSpeed << "km/s" << endl << endl;
}
void Car::Accel3()
{
	if (fuelGauge <= 0)
	{
		return;
	}
	else
	{
		fuelGauge -= CAR_CONST::FUEL_STEP;
	}
	if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}
void Car::Break3()
{
	curSpeed -= CAR_CONST::BRK_STEP;
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

}

void main7()
{
	Car run99;
	run99.InitMembers3("run99", 100);
	run99.Accel3();
	run99.Accel3();
	run99.Accel3();
	run99.ShowCarState3();
	run99.Break3();
	run99.ShowCarState3();
}