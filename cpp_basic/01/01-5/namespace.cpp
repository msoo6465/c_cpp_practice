/* 
전달받는 인자도 동일하면 기본적으로 함수이름이 같으면 오류가 발생한다.
이를 해결하기 위해서 c++에서는 네임스페이스라는 이름공간으로 구분할 수 있도록 만들었다.
*/ 
#include <iostream>

namespace BestComImpl_ {
	void SimpleFunc(void) {
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}
namespace ProgComImpl_ {
	void SimpleFunc(void) {
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}

int practice1_1_5(void) {
	BestComImpl_::SimpleFunc();
	ProgComImpl_::SimpleFunc();
	return 0;
}