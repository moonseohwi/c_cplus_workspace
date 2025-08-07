//TransportMain.cpp ����

#include <iostream>
#include "Person.h"

//������ ��� ���
Person::Person(string name, int money) :
	name(name), money(money){}

void Person::takeBus(Bus& bus) {
	if (money < bus.getFEE()) {
		cout << "�ܾ��� �����մϴ�.\n";
	}
	else {
		bus.take();  //������ ž��
		money -= bus.getFEE();  //������ �� - ���
	}
}

void Person::displayInfo() {
	cout << name << " : �ܾ� " << money << "��\n";
}