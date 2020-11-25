#include <iostream>
// 오버로딩은 함수 이름이 같더라도 인자의 개수나 타입이 다르면 사용할 수 있다.
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