#include <iostream>
#include "com.h"

void com1::coms(void) {
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	comp();
	com2::coms();
}

void com2::coms(void) {
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}

void com1::comp(void) {
	std::cout << "So Pretty!!" << std::endl;
}