#include <iostream>
#include "Card.h"
using namespace std;

int main()
{
	//Card �ν��Ͻ� ����
	/*
	//���� ����
	Card card1("�ӽÿ�");
	Card card2("���");
	Card card3("�ڻ���");

	cout << "ī�� ��ȣ : " << card1.getCardNumber() << endl;
	cout << "ī�� ��ȣ : " << card2.getCardNumber() << endl;
	cout << "ī�� ��ȣ : " << card3.getCardNumber() << endl;
	*/

	//�迭�� ����
	/*
	const int SIZE = 3;
	Card cardList[SIZE] = {
		Card("�ӽÿ�"),
		Card("���"),
		Card("�ڻ���")
	};

	cout << "=========== ī�� ���� ��� ===========\n"; 
	for (int i = 0; i < SIZE; i++) {
		cardList[i].printInfo();
	}
	*/

	//����� �Է� ó�� ���
	const int SIZE = 3;  
	Card cardList[SIZE];  //�⺻ �����ڷ� ����

	for (int i = 0; i < SIZE; i++) {
		string name;  //�Է��� �� �̸�
		cout << i + 1 << "��° �� �̸� �Է� : ";
		getline(cin, name);  //������ ���� �Է� ����
		
		//�������� �Ű������� �̸� �Է�
		cardList[i] = Card(name);
	}

	cout << "=========== ī�� ���� ��� ===========\n";
	for (int i = 0; i < SIZE; i++) {
		cardList[i].printInfo();
	}

	return 0;
}