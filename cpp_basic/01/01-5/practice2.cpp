/*
���ӽ����̽��� ����Ͽ� �Լ��� �����ϰ� �����ϴ� ���
*/
#include <iostream>

namespace BestComImpl {
	void SimpleFunc(void);
}
namespace ProgComImpl {
	void SimpleFunc(void);
}

namespace BestComImpl {
	void PrettyFunc(void);
}

int main_1_5(void) {
	//using�� ����Ͽ� ���ӽ����̽��� ��������� �ʰ� ����� �� �ִ�.
	//using BestComImpl::SimpleFunc;
	//SimpleFunc();
	BestComImpl::SimpleFunc();
	return 0;
}
//���� �̸� ������ ��� namespace�� �������� �ʾƵ� �ȴ�.
void BestComImpl::SimpleFunc(void) {
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	PrettyFunc();
	ProgComImpl::SimpleFunc();
}

void ProgComImpl::SimpleFunc(void) {
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}

void BestComImpl::PrettyFunc(void) {
	std::cout << "So Pretty!!" << std::endl;
}