/*
C������ ���̺귯���� C++������ ��밡���ϴ�.
.h�� ���� �տ� c�� ���̸� �ȴ�.
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