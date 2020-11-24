// 문제3 숫자를 하나 입력받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성해 보자. 

#include <iostream>

int practice3(void) {
	int val1;
	std::cout << "정수 하나 입력해주세요.";
	std::cin >> val1;

	for (int i = 1; i < 10; i++) {
		std::cout << val1 << "x" << i << "=" << val1 * i<<std::endl;
	}
	return 0;
}