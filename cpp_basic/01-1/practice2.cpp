// ����2 ���α׷� ����ڷκ��� �̸��� ��ȭ��ȣ�� ���ڿ��� ���·� �Է� �޾Ƽ�, �Է� ���� �����͸� �״�� ����ϴ� ���α׷��� �ۼ��� ����.
#include <iostream>

int practice2(void) {
	char number[20];
	char name[20];
	std::cout << "��ȭ��ȣ : ";
	std::cin >> number;
	std::cout << "�̸� : ";
	std::cin >> name;
	
	std::cout << "�Է��� ��ȭ��ȣ�� : " << number << std::endl << "�Է��� �̸��� : " << name;
	return 0;
}