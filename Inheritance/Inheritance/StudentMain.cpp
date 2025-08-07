#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	//Person 인스턴스 생성 - 부모 클래스
	Person p1("이종범");
	p1.greet();
	p1.displayInfo();

	//Student 인스턴스 생성 - 자식 클래스
	Student st1("이정후", 51);
	st1.greet();
	st1.displayInfo();

	return 0;
}