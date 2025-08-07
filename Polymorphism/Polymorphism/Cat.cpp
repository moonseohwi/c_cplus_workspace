#include "Cat.h"
#include <iostream>
using namespace std;

class Cat : public Animal {
public:
	void cry() override {
		cout << "¾ß ~ ¿Ë!!\n";
	}

	~Cat() override {
		cout << "Cat ¼Ò¸êÀÚ È£ÃâµÊ\n";
	}
};