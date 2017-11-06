#include<iostream>
#include<cstring>

using namespace std;

#define ID_LEN  20
#define FUEL_STEP  2
#define MAX_SPD  200
#define ACC_STEP  10
#define BRK_STEP  10

struct Car
{
	char gamerID[ID_LEN]; // 소유자 ID
	int fuelGauge; // 연료량 
	int curSpeed; //현재 속도

	void ShowCarState()
	{
		cout << "소유자 :ID " << gamerID << endl;
		cout << "연료량 : " << fuelGauge << "%" << endl;
		cout << "현재 속도: " << curSpeed << "km/s" << endl << endl;
	}
	void Accel()
	{
		if (fuelGauge <= 0)
		{
			return;
		}
		else
		{
			fuelGauge -= FUEL_STEP;
		}

		if (curSpeed + ACC_STEP >= MAX_SPD)
		{
			curSpeed = MAX_SPD;
			return;
		}

		curSpeed += ACC_STEP;
	}
	void Break()
	{
		if (curSpeed < BRK_STEP)
		{
			curSpeed = 0;
			return;
		}
		curSpeed -= BRK_STEP;
	}

};

void main5()
{
	Car run99 = {"run99", 100, 0};
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();


	Car speed77 = { "speed77", 100, 0 };
	speed77.Accel();
	speed77.Break();
	speed77.ShowCarState();

}