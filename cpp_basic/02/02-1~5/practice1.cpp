// Q1 : ���ڷ� ���޵� INT�� ������ ���� 1�� ������Ű�� �Լ�

// Q2 : ���ڷ� ���޵� INT�� ������ ��ȣ�� �ٲٴ� �Լ�

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
	cout << "��ȣ �ٲ� num : " << num << endl;
	return 0;
}