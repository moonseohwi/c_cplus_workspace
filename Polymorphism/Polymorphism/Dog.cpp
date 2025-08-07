#include "Dog.h"
#include <iostream>
using namespace std;

class Dog : public Animal {
public:
	void cry() override {
		cout << "¸Û ~ ¸Û!!\n";
	}

	~Dog() override {
		cout << "Dog ¼Ò¸êÀÚ È£ÃâµÊ\n";
	}
};