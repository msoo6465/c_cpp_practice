#include <iostream>
using namespace std;

/*
�Ʒ��� ���� ��ȯ���� ���۷����϶� ���������� ��ȯ�ϰ� �� ���
���� �ּҴ� ��ȯ������ ���������� �Լ� ȣ���� ������ ������� �ǹǷ� 
�̻��� ���� ������ �ȴ�. �����Ϸ��� �ڵ����� �ɷ����� �����Ƿ� �����ؾ��Ѵ�. 
*/

int& RefRetFuncTwo(int& ref) {
	int n = 1;
	ref++;
	n += ref;
	cout << "n : " << &n << endl;
	return n;
}

int ReRefRetFunc2(void) {
	int num1 = 1;
	int& num2 = RefRetFuncTwo(num1);

	num1 += 1;
	num2 += 100;


	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	return 0;

}