#include <iostream>
#include <cstring>
#include "Car.h"
using namespace std;


class Vehicle
{
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(const char * ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

void Car::InitMembers(char * ID, int fuel) {
	//gamerID�� fuelGauge�� ��� Car2�� ���ӽ����̽��� �����߱� ������ �������� �ٷ� ����� �� �ִ�.
	strcpy_s(gamerID,20, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::ShowCarState() {
	cout << "������ID : " << gamerID << endl;
	cout << "���ᷮ : " << fuelGauge << "%" << endl;
	cout << "����ӵ� : " << curSpeed << "km/s" << endl;
}

void Car::Accel() {
	if (fuelGauge <= 0) {
		return;
	}
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD) {
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break() {
	if (curSpeed < CAR_CONST::BRK_STEP) {
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST::BRK_STEP;
}

