#include <iostream>
#include <vector>
#include "BankAccount.h"
using namespace std;

int main()
{
	//은행 계좌를 저장할 벡터 객체 생성
	vector<BankAccount> accounts;

	//계좌 생성 
	accounts.push_back(BankAccount(1001, "이우주"));
	accounts.push_back(BankAccount(1002, "정은하"));
	accounts.push_back(BankAccount(1003, "한강", 100000));

	//입금
	accounts[0].deposit(10000);
	accounts[1].deposit(30000);

	//출금
	accounts[1].withdraw(20000);
	accounts[1].withdraw(50000);  //잔액 부족


	//계좌 정보 출력
	for (BankAccount account : accounts) {
		account.displayInfo();
		account.getTransactionHistory();
	}

	//실행창이 꺼지지 않도록 유지
	system("pause");

	return 0;
}