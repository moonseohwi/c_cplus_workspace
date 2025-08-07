#ifndef DOG_H
#define DOG_H
#include "Animal.h"
#include <iostream>
using namespace std;

class Dog : public Animal {
public:
	void cry() override;

	~Dog() override;
};

#endif 

