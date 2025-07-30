//StudentMain.cpp ����

#include <iostream>
#include "Student.h"

//������ ����
Student::Student(int studentId, string studentName) {
	this->studentId = studentId;
	this->studentName = studentName;
}

//�Լ� ����
void Student::setKoreanSubject(string name, int score) {
	korean.setSubjectName(name);
	korean.setScorePoint(score);
}

void Student::setMathSubject(string name, int score) {
	math.setSubjectName(name);
	math.setScorePoint(score);
}

void Student::showInfo() {
	cout << "�й� : " << studentId
		<< "\n�̸� : " << studentName
		<< "\n���� ���� : " << korean.getScorePoint()
		<< "\n���� ���� : " << math.getScorePoint() << endl;
	cout << "-------------------------------------------------\n";
}
