#include "Printer.h"

int pntMain(void) {
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love c++");
	pnt.ShowString();
	return 0;
}