#include <iostream>
using namespace std;

#include "Circle.h"

int main()
{
	//�� �ν��Ͻ� ����
	Circle c1(2, 3, 5);
	Circle c2(10, 10, 10);

	c1.displayInfo();
	c2.displayInfo();

	return 0;
}