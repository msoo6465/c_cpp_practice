#include <iostream>
#include <cstring>


using namespace std;

const int NAME_LEN = 20;

void create(void);
void deposit(void);
void withdraw(void);
void lookup(void);
void menu(void);

typedef struct {
	int accID;
	int balance;
	char cusName[NAME_LEN];
}Acount;

Acount accArr[100];
int accNum = 0;

int main_oop(void) {
	int input;
	while (1) {
		menu();
		cin >> input;
		cout << endl;

		if (input == 1) {
			create();
		}
		else if(input==2){
			deposit();
		}
		else if (input == 3) {
			withdraw();
		}
		else if (input == 4) {
			lookup();
		}
		else if (input == 5) {
			break;
		}
		else {
			cout << "��ȿ���� ���� �׸��� ���̽��ϴ�." << endl;;
		}
	}
	cout << "���α׷��� ����˴ϴ�.";
	return 0;
}
void menu(void) {
	cout << "----menu----" << endl;
	cout << "1.���°���" << endl;
	cout << "2.�Ա�" << endl;
	cout << "3.���" << endl;
	cout << "4.�������� ��ü ���" << endl;
	cout << "5.���α׷�����" << endl;
	cout << "���� : " << endl;
}
	
void create(void) {
	int id;
	char name[NAME_LEN];
	int balance;
	cout << "[���°���]" << endl;
	cout << "����ID : ";
	cin >> id;
	cout << endl << "�� �� :";
	cin >> name;
	cout << endl << "�Աݾ� : ";
	cin >> balance;
	accArr[accNum].accID = id;
	strcpy_s(accArr[accNum].cusName,NAME_LEN, name);
	accArr[accNum].balance = balance;
	accNum++;
}

void deposit(void) {
	int id;
	int money;
	cout << "[��  ��]" << endl;
	cout << "����ID : ";
	cin >> id;
	cout << endl << "�Աݾ� : ";
	cin >> money;
	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID == id) {
			accArr[i].balance += money;
			cout << endl << "�ԱݿϷ�" << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID�� �Է��ϼ̽��ϴ�.";
	
}

void withdraw(void) {
	int id;
	int money;
	cout << "[���]" << endl;
	cout << "����ID : ";
	cin >> id;
	cout << endl << "��ݾ� : ";
	cin >> money;
	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID == id) {
			if (accArr[i].balance < money) {
				cout << "���� ����� �Ф�" << endl << endl;
				return;
			}
			accArr[i].balance -= money;
			cout << endl << "��ݿϷ�" << endl;
			break;
		}
	}
	cout << "��ȿ���� ���� ID�� �Է��ϼ̽��ϴ�.";
}

void lookup(void) {
	for (int i = 0; i < accNum; i++) {
		cout << "����ID : " << accArr[i].accID << endl;
		cout << "��  ��" << accArr[i].cusName << endl;
		cout << "��  ��" << accArr[i].balance << endl;
		cout << "---------" << endl << endl;
	}
}