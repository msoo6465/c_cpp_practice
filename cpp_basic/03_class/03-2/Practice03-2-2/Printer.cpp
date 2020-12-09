#include <iostream>
#include "Printer.h"
using namespace std;

void Printer::SetString(char* str) {
	inStr = str;
}

void Printer::ShowString() {
	cout << inStr << endl;
}