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
			cout << "유효하지 않은 항목을 고르셨습니다." << endl;;
		}
	}
	cout << "프로그램이 종료됩니다.";
	return 0;
}
void menu(void) {
	cout << "----menu----" << endl;
	cout << "1.계좌개설" << endl;
	cout << "2.입금" << endl;
	cout << "3.출금" << endl;
	cout << "4.계좌정보 전체 출력" << endl;
	cout << "5.프로그램종료" << endl;
	cout << "선택 : " << endl;
}
	
void create(void) {
	int id;
	char name[NAME_LEN];
	int balance;
	cout << "[계좌개설]" << endl;
	cout << "계좌ID : ";
	cin >> id;
	cout << endl << "이 름 :";
	cin >> name;
	cout << endl << "입금액 : ";
	cin >> balance;
	accArr[accNum].accID = id;
	strcpy_s(accArr[accNum].cusName,NAME_LEN, name);
	accArr[accNum].balance = balance;
	accNum++;
}

void deposit(void) {
	int id;
	int money;
	cout << "[입  금]" << endl;
	cout << "계좌ID : ";
	cin >> id;
	cout << endl << "입금액 : ";
	cin >> money;
	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID == id) {
			accArr[i].balance += money;
			cout << endl << "입금완료" << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID를 입력하셨습니다.";
	
}

void withdraw(void) {
	int id;
	int money;
	cout << "[출금]" << endl;
	cout << "계좌ID : ";
	cin >> id;
	cout << endl << "출금액 : ";
	cin >> money;
	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID == id) {
			if (accArr[i].balance < money) {
				cout << "돈이 없어요 ㅠㅠ" << endl << endl;
				return;
			}
			accArr[i].balance -= money;
			cout << endl << "출금완료" << endl;
			break;
		}
	}
	cout << "유효하지 않은 ID를 입력하셨습니다.";
}

void lookup(void) {
	for (int i = 0; i < accNum; i++) {
		cout << "계좌ID : " << accArr[i].accID << endl;
		cout << "이  름" << accArr[i].cusName << endl;
		cout << "잔  액" << accArr[i].balance << endl;
		cout << "---------" << endl << endl;
	}
}