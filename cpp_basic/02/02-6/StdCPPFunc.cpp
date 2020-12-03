/*
C언어에서의 라이브러리를 C++에서도 사용가능하다.
.h를 빼고 앞에 c를 붙이면 된다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdio>
#include <cstring>

int StdCPPFunc(void) {

	char str1[] = "Result";
	char str2[30];

	strcpy(str2, str1);
	printf("%s : %f\n", str1, sin(0.14));
	printf("%s : %f\n", str2, abs(0.14));

	return 0;


}