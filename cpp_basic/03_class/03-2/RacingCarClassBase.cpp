/*
class는 구조체와는 다르게 초기화를 위한 접근을 따로 명시해야한다.
*/


#include <iostream>
#include <cstring>
using namespace std;


namespace CAR_CONST2 {
	//enum은 열거 자료형이다.
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
	//gamerID나 fuelGauge의 경우 Car2의 네임스페이스로 선언했기 때문에 변수명을 바로 사용할 수 있다.
	strcpy_s(gamerID,20, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Vehicle::ShowCarState() {
	cout << "소유자ID : " << gamerID << endl;
	cout << "연료량 : " << fuelGauge << "%" << endl;
	cout << "현재속도 : " << curSpeed << "km/s" << endl;
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