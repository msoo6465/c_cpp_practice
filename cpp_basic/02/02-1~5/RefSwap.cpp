#include <iostream>
using namespace std;

// call-by-reference �� �����ͷε� ���������� �����ڸ� ����ϴ� �͵� �����ϴ�.

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