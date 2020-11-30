/*
�����ڴ� ������� ���� ���� �տ�&������Ѵ�.
�����ڴ� ������ ���ؼ��� ������ �����ϴ�.
�����ڴ� �̸� ������ �Ұ����ϴ�.
�����ڷ� �迭 ��ҵ� ������ �� �ִ�.
*/

#include <iostream>

using namespace std;

void valRef(void) {
	int num1 = 1020;
	int& num2 = num1;
	num2 = 3047;
	cout << "VAL : " << num1 << endl;
	cout << "REF : " << num2 << endl;

	cout << "VAL : " << &num1 << endl;
	cout << "REF : " << &num2 << endl;
}

int RefArrElem(void) {
	int arr[3] = { 1, 3, 5 };
	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;
	return 0;
}

int RefPtr(void) {
	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;
	
	int& ref = num;
	//�����ڸ� ��ȣ �� �� �����ͷν� ���𰡴�
	int* (&pref) = ptr;
	int** (&dpref) = dptr;

	cout << ref << endl;
	cout <<*pref<< endl;
	cout << **dpref << endl;
	return 0;
}