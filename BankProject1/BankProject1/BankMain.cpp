#include <iostream>
#include <vector>
#include "BankAccount.h"
using namespace std;

int main()
{
	//���� ���¸� ������ ���� ��ü ����
	vector<BankAccount> accounts;

	//���� ���� 
	accounts.push_back(BankAccount(1001, "�̿���"));
	accounts.push_back(BankAccount(1002, "������"));
	accounts.push_back(BankAccount(1003, "�Ѱ�", 100000));

	//�Ա�
	accounts[0].deposit(10000);
	accounts[1].deposit(30000);

	//���
	accounts[1].withdraw(20000);
	accounts[1].withdraw(50000);  //�ܾ� ����


	//���� ���� ���
	for (BankAccount account : accounts) {
		account.displayInfo();
		account.getTransactionHistory();
	}

	//����â�� ������ �ʵ��� ����
	system("pause");

	return 0;
}