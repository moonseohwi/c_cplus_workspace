#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	//Person �ν��Ͻ� ���� - �θ� Ŭ����
	Person p1("������");
	p1.greet();
	p1.displayInfo();

	//Student �ν��Ͻ� ���� - �ڽ� Ŭ����
	Student st1("������", 51);
	st1.greet();
	st1.displayInfo();

	return 0;
}