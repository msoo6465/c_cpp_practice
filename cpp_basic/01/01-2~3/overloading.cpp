#include <iostream>
// �����ε��� �Լ� �̸��� ������ ������ ������ Ÿ���� �ٸ��� ����� �� �ִ�.
void MyFunc(void) {
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c) {
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b) {
	std::cout << "MyFunc(int a,int b) called" << std::endl;
}


int overloading(void) {
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}