#include <iostream>
#include "Card.h"
using namespace std;

//���� ������ Ŭ������ �ܺο��� �� ���� �����Ѵ�.
int Card::serialNum = 1000;

//�⺻ ������ ����
Card::Card(){}

Card::Card(string name) {  //������ 
	this->name = name;
	serialNum++;  //1���� ��Ŵ
	cardNumber = serialNum;
}

int Card::getCardNumber() {  //�Լ� ����
	return cardNumber;
}

void Card::printInfo() {
	cout << "�� �̸� : " << name
		<< ", ī�� ��ȣ : " << cardNumber << endl;
}
