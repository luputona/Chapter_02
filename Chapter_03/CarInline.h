#pragma once
#ifndef __CARINLINE_H__
#define __CARINLINE_H__
#include<iostream>
#include<cstring>

using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20,
		FUEL_STEP = 2,
		MAX_SPD = 200,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

class CarInline
{
private:
	char gamerID[CAR_CONST::ID_LEN]; // 소유자 ID
	int fuelGauge; // 연료량 
	int curSpeed; //현재 속도

public:
	void InitMembers4(char * ID, int fuel);
	void ShowCarState4();
	void Accel4();
	void Break4();
};

inline void CarInline::ShowCarState4()
{
	cout << "소유자 :ID " << gamerID << endl;
	cout << "연료량 : " << fuelGauge << "%" << endl;
	cout << "현재 속도: " << curSpeed << "km/s" << endl << endl;
}

inline void CarInline::Break4()
{
	curSpeed -= CAR_CONST::BRK_STEP;
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
}



#endif // !__CARINLINE_H__
