#include <iostream>
using namespace std;

#include "Circle.h"

int main()
{
	//원 인스턴스 생성
	Circle c1(2, 3, 5);
	Circle c2(10, 10, 10);

	c1.displayInfo();
	c2.displayInfo();

	return 0;
}