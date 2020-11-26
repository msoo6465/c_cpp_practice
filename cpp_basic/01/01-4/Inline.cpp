#include <iostream>

// inline 함수는 매크로함수의 단점인 복잡한 함수를 매크로 형태로 정의하는데 어려움을 보안하여 나온 방법
// 매크로 함수는 성능향상에 도움이 된다.

inline int SQUARE(int x) {

	return x *x;
}

int inline_(void) {
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(10) << std::endl;
	return 0;
}