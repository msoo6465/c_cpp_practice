/*
Point 클래스를 이용하여 원을 의미하는 Circle 클래스를 정의해라.
Circle 객체에는 좌표상의 위취 정보(원의 중심좌표)와 반지름의 길이 정보를 저장 및 출력할 수 있어야 한다.
또 Circle 클래스를 기반으로 Ring 클래스도 정의해라.
링은 두 개의 원으로 표현 가능하므로 두개의 Circle 객체를 기반으로 정의가 가능하다.*/

#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;

public:
	void Init(int x, int y) {
		xpos = x;
		ypos = y;
	}

	void ShowPointInfo() const {
		cout << "[" << xpos << ", " << ypos <<"]" << endl;
	}
};

class Circle {
private:
	int rad;
	Point center;

public:
	void Init(int x, int y, int r) {
		rad = r;
		center.Init(x, y);
	}

	void ShowCircleInfo() const {
		cout << "radius : " << rad << endl;
		center.ShowPointInfo();
	}
};

class Ring {
private:
	Circle inCircle;
	Circle outCircle;

public:
	void Init(int x1, int y1, int r1, int x2, int y2, int r2) {
		if (r1 > r2) {
			inCircle.Init(x2, y2, r2);
			outCircle.Init(x1, y1, r1);
		}
		else {
			inCircle.Init(x1, y1, r1);
			outCircle.Init(x2, y2, r2);
		}

	}

	void ShowRingInfo() {
		cout << "Inner Circle Info..." << endl;
		inCircle.ShowCircleInfo();
		cout << "Outter Circle Info..." << endl;
		outCircle.ShowCircleInfo();
	}
};

int main(void) {
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}