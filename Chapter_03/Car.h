#pragma once
#ifndef __CAR_H__
#define __CAR_H__

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

class Car
{
private:
	char gamerID[CAR_CONST::ID_LEN]; // ������ ID
	int fuelGauge; // ���ᷮ 
	int curSpeed; //���� �ӵ�

public:
	void InitMembers3(char * ID, int fuel);
	void ShowCarState3();
	void Accel3();
	void Break3();
};


#endif // !__CAR_H__
