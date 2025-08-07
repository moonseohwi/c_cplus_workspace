//TransportMain.cpp 보조

#include <iostream>
#include "Person.h"

//생성자 목록 방식
Person::Person(string name, int money) :
	name(name), money(money){}

void Person::takeBus(Bus& bus) {
	if (money < bus.getFEE()) {
		cout << "잔액이 부족합니다.\n";
	}
	else {
		bus.take();  //버스에 탑승
		money -= bus.getFEE();  //소유한 돈 - 요금
	}
}

void Person::displayInfo() {
	cout << name << " : 잔액 " << money << "원\n";
}