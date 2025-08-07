#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal {
public:
	virtual ~Animal();

	void breathe();

	virtual void cry() = 0;  
};

#endif 

