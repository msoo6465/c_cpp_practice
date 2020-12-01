#include <iostream>
using namespace std;

typedef struct __Point {
	int xpos;
	int ypos;
} Point;

Point& pntAdder(const Point& p1, const Point& p2);
int practice2_02_5(void) {
	Point* pptr1 = new Point;
	pptr1->xpos = 4;
	pptr1->ypos = 40;

	Point* pptr2 = new Point;
	pptr2->xpos = 4;
	pptr2->ypos = 40;

	Point& pref = pntAdder(*pptr1, *pptr2);
	cout << "[" << pref.xpos << "," << pref.ypos << "]" << endl;

	delete pptr1;
	delete pptr2;
	delete &pref;
	return 0;
}

Point& pntAdder(const Point& p1, const Point& p2) {
	Point *addpoint = new Point;
	addpoint->xpos = p1.xpos + p2.xpos;
	addpoint->ypos = p1.ypos + p2.ypos;
	return *addpoint;
}