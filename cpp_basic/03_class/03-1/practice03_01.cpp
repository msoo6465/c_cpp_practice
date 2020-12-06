/*
이차원 평면상에서의 좌표를 표현할 수 있는 구조체를 다음과 같이 정의
struct Point{
	int xpos;
	int ypos;
};
위의 구조체를 기반으로 다음의 함수를 정의하고자 한다.
void MovePos(int x, int y);
void AddPoint(const Point &pos);
void ShowPosition();
*/
#include <iostream>
using namespace std;


struct Point{
	int xpos;
	int ypos;

	void MovePos(int x, int y) {
		xpos += x;
		ypos += y;
	}

	void AddPoint(const Point& pos) {
		xpos += pos.xpos;
		ypos += pos.ypos;
	}

	void ShowPosition() {
		cout << "xpos : " << xpos << endl;
		cout << "ypos : " << ypos << endl;
	}
};

int practice_03_01(void) {
	Point pos1 = { 12,4 };
	Point pos2 = { 20,30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPosition();

	pos1.AddPoint(pos2);
	pos1.ShowPosition();
	return 0;
}