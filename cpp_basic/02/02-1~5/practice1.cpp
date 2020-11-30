// Q1 : 인자로 전달된 INT형 변수의 값을 1씩 증가시키는 함수

// Q2 : 인자로 전달된 INT형 변수의 부호를 바꾸는 함수

#include <iostream>
using namespace std;
int plusOne(int& num) {
	return num++;
}

int changeToMinus(int& num) {
	num = -num;
	return 0;
}

int practice_02_1(void) {
	int num = 10;

	plusOne(num);
	cout << "plus num : " << num << endl;
	changeToMinus(num);
	cout << "부호 바뀐 num : " << num << endl;
	return 0;
}