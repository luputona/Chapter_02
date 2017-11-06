#include<iostream>
#include<cstring>
#include"CarInline.h"

using namespace std;

void main8()
{
	CarInline run99;
	run99.InitMembers4("run99", 100);
	run99.Accel4();
	run99.Accel4();
	run99.Accel4();
	run99.ShowCarState4();
	run99.Break4();
	run99.ShowCarState4();
}

void CarInline::InitMembers4(char *ID, int fuel)
{
	strcpy_s(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}
void CarInline::Accel4()
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