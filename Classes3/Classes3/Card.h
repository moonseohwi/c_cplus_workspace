#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

class Card {
private:
	static int serialNum;  //���� ��ȣ (ī�� ��ȣ �ڵ������� ���� �ʿ���)
	string name;      //�� �̸�
	int cardNumber;   //���� ī�� ��ȣ 

public:
	Card();  //�⺻ ������
	Card(string name);

	int getCardNumber();  //ī�� ��ȣ �������� 
	void printInfo();     //ī�� ���� ���

};




#endif
