/* 
���޹޴� ���ڵ� �����ϸ� �⺻������ �Լ��̸��� ������ ������ �߻��Ѵ�.
�̸� �ذ��ϱ� ���ؼ� c++������ ���ӽ����̽���� �̸��������� ������ �� �ֵ��� �������.
*/ 
#include <iostream>

namespace BestComImpl_ {
	void SimpleFunc(void) {
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
	}
}
namespace ProgComImpl_ {
	void SimpleFunc(void) {
		std::cout << "ProgCom�� ������ �Լ�" << std::endl;
	}
}

int practice1_1_5(void) {
	BestComImpl_::SimpleFunc();
	ProgComImpl_::SimpleFunc();
	return 0;
}