#include <stdio.h>
int Pointer() {
	int* p;
	int a;

	a = 2;
	p = &a;
	printf("a 의 값 : %d \n", a);
	printf("a 의 주소 값 : %d\n", &a);
	printf("p 의 주소 값 : %d \n", &p);
	printf("p 의 값 : %d\n", *p);
	return 0;
}