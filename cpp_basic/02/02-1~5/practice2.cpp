// 포인터가 가리키는 대상이 바뀌는 함수를 짜보자.

#include <iostream>
using namespace std;

void SwapPointer(int* ptr1, int* ptr2) {

	int *temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

}

int practice2_02_1(void) {
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	cout<<"ptr1 : " << ptr1 << endl << ptr2 << endl;

	SwapPointer(ptr1, ptr2);

	cout << "ptr1 : " << ptr1 << endl << ptr2 << endl;

	return 0;
}