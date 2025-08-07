//StudentsMain.cpp 보조`
#include <iostream>
#include "Students.h"

//생성자 목록 방식
Students::Students(int studentId, string studentName) :
	studentId(studentId), studentName(studentName) {}

void Students::addSubject(string name, int score) {
	if (subjectCount < 10) {  //배열의 공간이 10을 초과하지 않는 다면
		subjects[subjectCount].setSubjectName(name);  //과목 설정
		subjects[subjectCount].setScorePoint(score);
		subjectCount++;  //다음 순서로 1증가
	}
}

//평균 점수 출력하기 
void Students::showInfo() {
	int sum = 0;     //총점
	double average;  //평균

	cout << "학번 : " << studentId
		<< "\n이름 : " << studentName << endl;
	//과목은 여러개 이므로 반복문 사용
	for (int i = 0; i < subjectCount; i++) {
		sum += subjects[i].getScorePoint();  //총점 계산 
	
		cout << subjects[i].getSubjectName()  //과목 이름
			<< " 점수 : " << subjects[i].getScorePoint() << "점\n";
	}
	cout << "------------------------\n";
	//총합 계산
	cout << "총점 : " << sum << "점" << endl;

	//평균 계산 
	average = (double)sum / subjectCount;

	cout << fixed;
	cout.precision(1);  //소수 첫째자리까지 출력
	cout << "------------------------\n";
	cout << "평균 점수 : " << average << endl;
	cout << "------------------------\n";
}


