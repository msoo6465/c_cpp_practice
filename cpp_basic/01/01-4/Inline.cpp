#include <iostream>

// inline �Լ��� ��ũ���Լ��� ������ ������ �Լ��� ��ũ�� ���·� �����ϴµ� ������� �����Ͽ� ���� ���
// ��ũ�� �Լ��� ������� ������ �ȴ�.

inline int SQUARE(int x) {

	return x *x;
}

int inline_(void) {
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(10) << std::endl;
	return 0;
}