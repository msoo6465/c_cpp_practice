// ����3 ���ڸ� �ϳ� �Է¹޾Ƽ� �� ���ڿ� �ش��ϴ� �������� ����ϴ� ���α׷��� �ۼ��� ����. 

#include <iostream>

int practice3(void) {
	int val1;
	std::cout << "���� �ϳ� �Է����ּ���.";
	std::cin >> val1;

	for (int i = 1; i < 10; i++) {
		std::cout << val1 << "x" << i << "=" << val1 * i<<std::endl;
	}
	return 0;
}