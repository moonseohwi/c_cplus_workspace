//CircleMain.cpp ����

#ifndef Circle_H
#define Circle_H
#include "Point.h"

class Circle {
private:
	Point center;  //�߽���
	int radius;  //������

public:
	Circle(int x, int y, int radius);

	void displayInfo();  //���� ���� ���
};

#endif  //!1