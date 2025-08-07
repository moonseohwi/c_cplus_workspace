#ifndef CAT_H
#define CAT_H
#include "Animal.h"
#include <iostream>
using namespace std;

class Cat : public Animal {
public:
	void cry() override;

	~Cat() override;
};

#endif 

