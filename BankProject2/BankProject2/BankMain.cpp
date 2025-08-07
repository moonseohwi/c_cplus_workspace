#include <iostream>
#include <vector>
#include "BankAccount.h"
using namespace std;

vector<BankAccount> accounts;  //계좌 저장 벡터 생성
int nextAccountNumber = 1000;  //현재 계좌 번호(계좌 수)

//계좌 생성
void createAccount() {
	string name;
	cin.ignore();
	cout << "계좌주를 입력하세요 : ";
	getline(cin, name);

	//신규 계좌 생성
	BankAccount newAccount(nextAccountNumber, name);
	accounts.push_back(newAccount);
	cout << "계좌가 성공적으로 생성되었습니다.(계좌번호 : " 
		<< nextAccountNumber << " )\n";
	nextAccountNumber++;  //다음 계좌
}

//계좌 검색
BankAccount* searchAccount(int accNum) {
	for (auto& account : accounts) {
		if (account.getAccontNumber() == accNum) {
			return &account;  //계좌 주소로 반환
		}
	}
	return nullptr;
}

//예금 기능
void deposit() {
	int accNum;  //실행화면에서 입력한 계좌 번호 
	int amount;

	cout << "입금할 계좌번호를 입력하세요 : ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		cout << "입금할 금액을 입력하세요 : ";
		cin >> amount;
		if (cin.fail()) {  //오류 처리
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "숫자를 입력하세요.\n";
			return;
		}
		//입력시 오류가 없는 경우
		account->deposit(amount);  //예금 기능 호출
	}
	else {
		cout << "계좌 번호를 찾을 수 없습니다.\n";
	}
}

//출금 기능
void  withdraw() {
	int accNum;  //실행화면에서 입력한 계좌 번호 
	int amount;

	cout << "출금할 계좌번호를 입력하세요 : ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		cout << "출금할 금액을 입력하세요 : ";
		cin >> amount;
		if (cin.fail()) {  //오류 처리
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "숫자를 입력하세요.\n";
			return;
		}
		//입력시 오류가 없는 경우
		account->withdraw(amount);  //출금 기능 호출
	}
	else {
		cout << "계좌 번호를 찾을 수 없습니다.\n";
	}
}

//계좌 정보 출력
void displayAccount() {
	int accNum;  //실행화면에서 입력한 계좌 번호

	cout << "조회할 계좌번호를 입력하세요 : ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		account->displayInfo();
		account->getTransactionHistory();
	}
	else {
		cout << "계좌 번호를 찾을 수 없습니다.\n";
	}
}

int main()
{

	bool run = true;
	int choice;

	while (run) {
		cout << "========================================================\n";
		cout << "  1.계좌생성 | 2.예금 | 3.출금 | 4. 계좌검색 | 5. 종료 \n";
		cout << "========================================================\n";
		cout << "선택> ";
		cin >> choice;

		switch (choice) {
		case 1:
			createAccount();
			break;
		case 2:
			deposit();
			break;
		case 3:
			withdraw();
			break;
		case 4:
			displayAccount();
			break;
		case 5:
			cout << "프로그램을 종료합니다.\n";
			run = false;
			break;
		default:
			cout << "지원하지 않는 기능입니다. 다시 입력하세요.\n";
			break;
		}
	} //while() 닫기

	system("pause");

	return 0;
}