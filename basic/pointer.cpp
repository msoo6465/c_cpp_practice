#include <stdio.h>
int main() {
	int* p;
	int a;

	a = 2;
	p = &a;
	printf("a �� �� : %d \n", a);
	printf("a �� �ּ� �� : %d\n", &a);
	printf("p �� �ּ� �� : %d \n", &p);
	printf("p �� �� : %d\n", *p);
	return 0;
}