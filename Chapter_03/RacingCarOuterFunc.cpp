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

struct Car
{
	char gamerID[CAR_CONST::ID_LEN]; // 소유자 ID
	int fuelGauge; // 연료량 
	int curSpeed; //현재 속도

	void ShowCarState1();
	void Accel1();
	void Break1();
};
void Car::ShowCarState1()
{
	cout << "소유자 :ID " << gamerID << endl;
	cout << "연료량 : " << fuelGauge << "%" << endl;
	cout << "현재 속도: " << curSpeed << "km/s" << endl << endl;
}
void Car::Accel1()
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
void Car::Break1()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}


void main4()
{
	Car run99 = { "run99", 100, 0 };
	run99.Accel1();
	run99.Accel1();
	run99.ShowCarState1();
	run99.Break1();
	run99.ShowCarState1();


	Car speed77 = { "speed77", 100, 0 };
	speed77.Accel1();
	speed77.Break1();
	speed77.ShowCarState1();

}