/*
네임스페이스를 사용하여 함수를 선언하고 정의하는 방법
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
	//using을 사용하여 네임스페이스를 명시해주지 않고 사용할 수 있다.
	//using BestComImpl::SimpleFunc;
	//SimpleFunc();
	BestComImpl::SimpleFunc();
	return 0;
}
//같은 이름 공간일 경우 namespace를 적어주지 않아도 된다.
void BestComImpl::SimpleFunc(void) {
	std::cout << "BestCom이 정의한 함수" << std::endl;
	PrettyFunc();
	ProgComImpl::SimpleFunc();
}

void ProgComImpl::SimpleFunc(void) {
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}

void BestComImpl::PrettyFunc(void) {
	std::cout << "So Pretty!!" << std::endl;
}