//CircleMain.cpp 보조

#include <iostream>
#include "Circle.h"
using namespace std;

//생성자 - 초기화 목록 방식(this를 사용하지 않음)
//생성자(변수1, 변수2) : 변수1(변수1), 변수2(변수2) {}
Circle::Circle(int x, int y, int radius) : center(x, y), radius(radius) {}

void Circle::displayInfo() {
	cout << "원의 중심(" << center.getX() << ", " <<center.getY()
		<< "), 반지름 : " << radius << endl;
}

