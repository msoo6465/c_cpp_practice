/*
������ ���󿡼��� ��ǥ�� ǥ���� �� �ִ� ����ü�� ������ ���� ����
struct Point{
	int xpos;
	int ypos;
};
���� ����ü�� ������� ������ �Լ��� �����ϰ��� �Ѵ�.
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