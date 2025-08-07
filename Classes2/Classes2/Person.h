//TransportMain.cpp 보조w

#ifndef PERSON_H
#define PERSON_H
#include "Bus.h"
#include <string>
using namespace std;

class Person {
private:
	string name;
	int money;

public:
	Person(string name, int money);

	void takeBus(Bus& bus);  //Bus&(참조자 사용)
	void displayInfo();
};
#endif
