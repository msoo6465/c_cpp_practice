// 문제2 프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서, 입력 받은 데이터를 그대로 출력하는 프로그램을 작성해 보자.
#include <iostream>

int practice2(void) {
	char number[20];
	char name[20];
	std::cout << "전화번호 : ";
	std::cin >> number;
	std::cout << "이름 : ";
	std::cin >> name;
	
	std::cout << "입력한 전화번호는 : " << number << std::endl << "입력한 이름은 : " << name;
	return 0;
}