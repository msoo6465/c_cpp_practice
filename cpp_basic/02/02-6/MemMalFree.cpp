//strcpy�� ���ȼ��� ����Ͽ� strcpy_s�� ����� ������ �������� ���� �ʾ� ��� �����ϱ� ���� �ڵ�
#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

/*
malloc�� �������� �޸� ������ �����ϱ� ���� �Լ�
free�� �������� ����� �޸� ������ ����ִ� �Լ�
*/

char* MakeStrAdr(int len) {
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}

int MalFree(void) {
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);
	return 0;
}

// C++���� ���Ǵ� new�� delete

char* MakeStrAdrNew(int len) {
	char* str = new char[len];
	return str;
}

int NewFreeMain(void) {
	char* str = MakeStrAdrNew(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	delete []str;
	return 0;
}