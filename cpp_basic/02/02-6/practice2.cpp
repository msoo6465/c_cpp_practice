#include <iostream>
using namespace std;

int practice_02_5(void) {
	const int num = 12;
	const int* ptr = &num;
	const int*(&ref) = ptr;

	cout << *ref << endl;
	cout << *ptr << endl;
	return 0;
}