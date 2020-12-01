#include <iostream>
using namespace std;

/*
아래와 같이 반환형이 리퍼런스일때 지역변수를 반환하게 될 경우
참조 주소는 반환하지만 지역변수는 함수 호출이 끝나면 사라지게 되므로 
이상한 값이 들어오게 된다. 컴파일러가 자동으로 걸러주지 않으므로 주의해야한다. 
*/

int& RefRetFuncTwo(int& ref) {
	int n = 1;
	ref++;
	n += ref;
	cout << "n : " << &n << endl;
	return n;
}

int ReRefRetFunc2(void) {
	int num1 = 1;
	int& num2 = RefRetFuncTwo(num1);

	num1 += 1;
	num2 += 100;


	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	return 0;

}