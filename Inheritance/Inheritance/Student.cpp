#include "Student.h"
#include <iostream>
using namespace std;

//생성자 구현 - 부모 클래스 생성자 상속 받기
Student::Student(string name, int studentId) :
	Person(name), studentId(studentId){}

void Student::greet() {
	cout << "안녕하세요. 성명 : " << name
		<< ", 학번  : " << studentId << endl;
}

void Student::displayInfo() {
	cout << "Student name : " << name << endl;
}