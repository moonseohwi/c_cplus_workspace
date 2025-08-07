#include <iostream>
#include <vector>
#include "BankAccount.h"
using namespace std;

vector<BankAccount> accounts;  //���� ���� ���� ����
int nextAccountNumber = 1000;  //���� ���� ��ȣ(���� ��)

//���� ����
void createAccount() {
	string name;
	cin.ignore();
	cout << "�����ָ� �Է��ϼ��� : ";
	getline(cin, name);

	//�ű� ���� ����
	BankAccount newAccount(nextAccountNumber, name);
	accounts.push_back(newAccount);
	cout << "���°� ���������� �����Ǿ����ϴ�.(���¹�ȣ : " 
		<< nextAccountNumber << " )\n";
	nextAccountNumber++;  //���� ����
}

//���� �˻�
BankAccount* searchAccount(int accNum) {
	for (auto& account : accounts) {
		if (account.getAccontNumber() == accNum) {
			return &account;  //���� �ּҷ� ��ȯ
		}
	}
	return nullptr;
}

//���� ���
void deposit() {
	int accNum;  //����ȭ�鿡�� �Է��� ���� ��ȣ 
	int amount;

	cout << "�Ա��� ���¹�ȣ�� �Է��ϼ��� : ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		cout << "�Ա��� �ݾ��� �Է��ϼ��� : ";
		cin >> amount;
		if (cin.fail()) {  //���� ó��
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "���ڸ� �Է��ϼ���.\n";
			return;
		}
		//�Է½� ������ ���� ���
		account->deposit(amount);  //���� ��� ȣ��
	}
	else {
		cout << "���� ��ȣ�� ã�� �� �����ϴ�.\n";
	}
}

//��� ���
void  withdraw() {
	int accNum;  //����ȭ�鿡�� �Է��� ���� ��ȣ 
	int amount;

	cout << "����� ���¹�ȣ�� �Է��ϼ��� : ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		cout << "����� �ݾ��� �Է��ϼ��� : ";
		cin >> amount;
		if (cin.fail()) {  //���� ó��
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "���ڸ� �Է��ϼ���.\n";
			return;
		}
		//�Է½� ������ ���� ���
		account->withdraw(amount);  //��� ��� ȣ��
	}
	else {
		cout << "���� ��ȣ�� ã�� �� �����ϴ�.\n";
	}
}

//���� ���� ���
void displayAccount() {
	int accNum;  //����ȭ�鿡�� �Է��� ���� ��ȣ

	cout << "��ȸ�� ���¹�ȣ�� �Է��ϼ��� : ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		account->displayInfo();
		account->getTransactionHistory();
	}
	else {
		cout << "���� ��ȣ�� ã�� �� �����ϴ�.\n";
	}
}

int main()
{

	bool run = true;
	int choice;

	while (run) {
		cout << "========================================================\n";
		cout << "  1.���»��� | 2.���� | 3.��� | 4. ���°˻� | 5. ���� \n";
		cout << "========================================================\n";
		cout << "����> ";
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
			cout << "���α׷��� �����մϴ�.\n";
			run = false;
			break;
		default:
			cout << "�������� �ʴ� ����Դϴ�. �ٽ� �Է��ϼ���.\n";
			break;
		}
	} //while() �ݱ�

	system("pause");

	return 0;
}