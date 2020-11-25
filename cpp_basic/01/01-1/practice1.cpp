//문제1 사용자로부터 총 5개의 정수를 입력 받아서, 그 합을 출력하는 프로그램을 작성해 보자.
#include <iostream>

int practice1(void) {

	int val1,val2,val3,val4,val5;
	std::cout << "1번째 정수 입력 :";
	std::cin >> val1;
	std::cout << "2번째 정수 입력 :";
	std::cin >> val2;
	std::cout << "3번째 정수 입력 :";
	std::cin >> val3;
	std::cout << "4번째 정수 입력 :";
	std::cin >> val4;
	std::cout << "5번째 정수 입력 :";
	std::cin >> val5;
	std::cout << val1 + val2 + val3 + val4 + val5;
	return val1 + val2 + val3 + val4 + val5;
}
