#include "Cat.h"
#include <iostream>
using namespace std;

class Cat : public Animal {
public:
	void cry() override {
		cout << "�� ~ ��!!\n";
	}

	~Cat() override {
		cout << "Cat �Ҹ��� ȣ���\n";
	}
};