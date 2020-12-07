/*
class�� ����ü�ʹ� �ٸ��� �ʱ�ȭ�� ���� ������ ���� ����ؾ��Ѵ�.
*/


#include <iostream>
#include <cstring>
using namespace std;


namespace CAR_CONST2 {
	//enum�� ���� �ڷ����̴�.
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

class Vehicle
{
private:
	char gamerID[CAR_CONST2::ID_LEN];
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(const char * ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

void Vehicle::InitMembers(const char * ID, int fuel) {
	//gamerID�� fuelGauge�� ��� Car2�� ���ӽ����̽��� �����߱� ������ �������� �ٷ� ����� �� �ִ�.
	strcpy_s(gamerID,20, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Vehicle::ShowCarState() {
	cout << "������ID : " << gamerID << endl;
	cout << "���ᷮ : " << fuelGauge << "%" << endl;
	cout << "����ӵ� : " << curSpeed << "km/s" << endl;
}

void Vehicle::Accel() {
	if (fuelGauge <= 0) {
		return;
	}
	else
		fuelGauge -= CAR_CONST2::FUEL_STEP;

	if (curSpeed + CAR_CONST2::ACC_STEP >= CAR_CONST2::MAX_SPD) {
		curSpeed = CAR_CONST2::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST2::ACC_STEP;
}

void Vehicle::Break() {
	if (curSpeed < CAR_CONST2::BRK_STEP) {
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST2::BRK_STEP;
}

int racingcarouterfunc(void) {
	Vehicle run99;
	run99.InitMembers("run99", 100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}