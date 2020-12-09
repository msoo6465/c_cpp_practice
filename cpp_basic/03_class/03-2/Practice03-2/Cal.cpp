#include <iostream>
#include "Cal.h"
using namespace std;

void Calculator::Init(void) {
	addCount = 0;
	minCount = 0;
	divCount = 0;
	mulCount = 0;
}

float Calculator::Add(float a, float b) {
	addCount++;
	return a + b;
}

float Calculator::Min(float a, float b) {
	minCount++;
	return a - b;
}

float Calculator::Div(float a, float b) {
	divCount++;
	return a / b;
}

float Calculator::Mul(float a, float b) {
	mulCount++;
	return a * b;
}

void Calculator::ShowOpCount() {
	cout << "µ¡¼À : " << addCount << " »¬¼À : " << minCount << " °ö¼À : " << mulCount << " ³ª´°¼À : " << divCount << endl;
}