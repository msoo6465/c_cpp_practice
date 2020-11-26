#include <iostream>
#include "com.h"

void com1::coms(void) {
	std::cout << "BestCom이 정의한 함수" << std::endl;
	comp();
	com2::coms();
}

void com2::coms(void) {
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}

void com1::comp(void) {
	std::cout << "So Pretty!!" << std::endl;
}