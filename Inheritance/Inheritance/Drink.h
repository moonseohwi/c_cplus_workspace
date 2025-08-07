#ifndef DRINK_H
#define DRINK_H
#include <string>
using namespace std;


class Drink {
protected:
	string name;  //��ǰ��
	int price;    //����
	int quantity;  //����

public:
	Drink(string name, int price, int quantity);

	int calcPrice();          //�ݾ� ���
	static void printTitle(); //���� ���
	void printData();         //������ ���
};

#endif
