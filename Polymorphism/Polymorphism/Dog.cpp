#include "Dog.h"
#include <iostream>
using namespace std;

class Dog : public Animal {
public:
	void cry() override {
		cout << "�� ~ ��!!\n";
	}

	~Dog() override {
		cout << "Dog �Ҹ��� ȣ���\n";
	}
};