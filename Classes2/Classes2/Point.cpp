//CircleMain.cpp ����

#include "Point.h"  //�ش� ���� �������� 
#include <iostream>
using namespace std;

//�ش� ���� ����
//������ ����
Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}

//��� �Լ� ����
int Point::getX() {
	return x;
}

int Point::getY() {
	return y;
}