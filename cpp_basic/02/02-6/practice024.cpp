
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>


using namespace std;
int practice024(void) {
	char str1[30];
	char str2[30];
	
	cin >> str1;
	cout << "���ڿ��� ���̴� : " << strlen(str1) << endl;
	cout << "123�� �����̸� : " << strcat(str1,"123") << endl;
	strcpy(str2, str1);
	cout << "����� ���� : " << str2 << endl;
	cout << "���ڿ��� �񱳴� : " << strcmp(str1,str2) << endl;

	return 0;

}
/*
����
#include <iostream>
#include <cstring>
using namespace std;

int main(void){
	char *str1 = "ABC 123 ";
	char *str1 = "DEF 456 ";
	char str3[50];

	cout << strlen(str1) << endl;
	cout << strlen(str2) << endl;
	strcpy(str3, str1);
	strcat(str3, str2);
	cout << str3 <<endl;

	if(strcmp(str1,str2)==0)
		cout << "���ڿ��� ����." << endl;
	else
		cout << "���ڿ��� �ٸ���." << endl;
	return 0;
}
*/