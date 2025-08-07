//StudentsMain.cpp 보조

#ifndef STUDENTS_H
#define STUDENTS_H

#include "Subject.h"

class Students {
private:
	int studentId;        //학생 아이디
	string studentName;   //학생 이름
	Subject subjects[10];  //과목 배열  <배열이기 때문에 subject에 s를 붙임>
	int subjectCount = 0; //현재 등록된 과목 수 (인덱스)

public:
	Students(int studentId, string studentName);

	void addSubject(string name, int score);
	void showInfo();
};
#endif 
