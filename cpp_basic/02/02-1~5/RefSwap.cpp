#include <iostream>
using namespace std;

// call-by-reference 는 포인터로도 가능하지만 참조자를 사용하는 것도 가능하다.

void SwapByRef2(int& ref1, int& ref2) {
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int reference_02_4(void) {
	int val1 = 10;
	int val2 = 20;

	SwapByRef2(val1, val2);
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;

	return 0;
}