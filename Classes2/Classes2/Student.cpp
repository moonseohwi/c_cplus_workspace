//StudentMain.cpp 보조

#include <iostream>
#include "Student.h"

//생성자 구현
Student::Student(int studentId, string studentName) {
	this->studentId = studentId;
	this->studentName = studentName;
}

//함수 구현
void Student::setKoreanSubject(string name, int score) {
	korean.setSubjectName(name);
	korean.setScorePoint(score);
}

void Student::setMathSubject(string name, int score) {
	math.setSubjectName(name);
	math.setScorePoint(score);
}

void Student::showInfo() {
	cout << "학번 : " << studentId
		<< "\n이름 : " << studentName
		<< "\n국어 점수 : " << korean.getScorePoint()
		<< "\n수학 점수 : " << math.getScorePoint() << endl;
	cout << "-------------------------------------------------\n";
}
