//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//namespace CAR_CONST
//{
//	enum 
//	{
//		ID_LEN = 20,
//		FUEL_STEP = 2,
//		MAX_SPD = 200,
//		ACC_STEP = 10,
//		BRK_STEP = 10
//	};
//}
//
//class Car
//{
//private:
//	char gamerID[CAR_CONST::ID_LEN]; // ������ ID
//	int fuelGauge; // ���ᷮ 
//	int curSpeed; //���� �ӵ�
//
//public:	
//	void InitMembers(char * ID, int fuel);
//	void ShowCarState();
//	void Accel();
//	void Break();	
//};
//
//void Car::InitMembers(char *ID, int fuel)
//{
//	strcpy_s(gamerID, ID);
//	fuelGauge = fuel;
//	curSpeed = 0;
//}
//void Car::ShowCarState()
//{
//	cout << "������ :ID " << gamerID << endl;
//	cout << "���ᷮ : " << fuelGauge << "%" << endl;
//	cout << "���� �ӵ�: " << curSpeed << "km/s" << endl << endl;
//}
//void Car::Accel()
//{
//	
//	if (fuelGauge <= 0)
//	{
//		return;
//	}
//	else
//	{
//		fuelGauge -= CAR_CONST::FUEL_STEP;
//	}
//	if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD)
//	{
//		curSpeed = CAR_CONST::MAX_SPD;
//		return;
//	}
//	curSpeed += CAR_CONST::ACC_STEP;
//}
//void Car::Break()
//{
//	curSpeed -= CAR_CONST::BRK_STEP;
//	if (curSpeed < CAR_CONST::BRK_STEP)
//	{
//		curSpeed = 0;
//		return;
//	}	
//}
//
//void main6()
//{
//	Car run99;
//	run99.InitMembers("run99", 100);
//	run99.Accel();
//	run99.Accel();
//	run99.Accel();
//	run99.ShowCarState();
//	run99.Break();
//	run99.ShowCarState();
//}
