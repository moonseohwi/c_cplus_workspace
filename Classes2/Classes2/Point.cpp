//CircleMain.cpp 보조

#include "Point.h"  //해더 파일 가져오기 
#include <iostream>
using namespace std;

//해더 파일 구현
//생성자 구현
Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}

//멤버 함수 구현
int Point::getX() {
	return x;
}

int Point::getY() {
	return y;
}