#include <iostream>
using namespace std;

class Point {
public:
	int x;
	int y;
};

class Rectagle {
public:
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo() {
		cout << "�� ��� : " << '[' << upLeft.x << ", ";
		cout << upLeft.y << ']' << endl;

		cout << "�� �ϴ� : " << '[' << lowRight.x << ", ";
		cout << lowRight.y << ']' << endl;

	}
};


int rectangleMain() {
	Point pos1 = { -2,4 };
	Point pos2 = { 5,9 };
	Rectagle rec = { pos2,pos1 };

	rec.ShowRecInfo();
	return 0;
}