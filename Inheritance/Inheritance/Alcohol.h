#ifndef ALCOHOL_H
#define ALCOHOL_H
#include "Drink.h"

//Drink�� ��� �ޱ�
class Alcohol : public Drink{
private:
	float alcper;  //���� ����

public:
	//�θ� ���� ��� ������
	Alcohol(string name, int price, int quantity, float alcper);

	static void printTitle();
	void printData();
};

#endif 

