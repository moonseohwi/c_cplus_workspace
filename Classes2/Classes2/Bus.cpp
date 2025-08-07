//TransportMain.cpp ����

#include <iostream>
#include "Bus.h"
using namespace std;

//������ - �ʱ�ȭ ���
Bus::Bus(int busNumber, int FEE) : busNumber(busNumber),
		passenger(0), money(0), FEE(FEE){}

//�Լ� ����
void Bus::take() {
	money += FEE;   //���� ����
	passenger++;    //�°� 1�� ����
}

int Bus::getFEE() {
	return FEE;
}

void Bus::displayInfo() {
	cout << busNumber << "�� ���� : "
		<< "���� " << money << "��, �°� "
		<< passenger << "��\n";
}