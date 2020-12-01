//strcpy가 보안성이 취약하여 strcpy_s를 쓰라는 오류로 컴파일이 되지 않아 경고를 무시하기 위한 코드
#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

/*
malloc은 동적으로 메모리 공간을 선언하기 위한 함수
free는 동적으로 선언된 메모리 공간을 비워주는 함수
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

// C++에서 사용되는 new와 delete

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