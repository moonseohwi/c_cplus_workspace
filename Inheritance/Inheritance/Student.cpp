#include "Student.h"
#include <iostream>
using namespace std;

//������ ���� - �θ� Ŭ���� ������ ��� �ޱ�
Student::Student(string name, int studentId) :
	Person(name), studentId(studentId){}

void Student::greet() {
	cout << "�ȳ��ϼ���. ���� : " << name
		<< ", �й�  : " << studentId << endl;
}

void Student::displayInfo() {
	cout << "Student name : " << name << endl;
}