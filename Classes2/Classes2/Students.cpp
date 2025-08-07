//StudentsMain.cpp ����`
#include <iostream>
#include "Students.h"

//������ ��� ���
Students::Students(int studentId, string studentName) :
	studentId(studentId), studentName(studentName) {}

void Students::addSubject(string name, int score) {
	if (subjectCount < 10) {  //�迭�� ������ 10�� �ʰ����� �ʴ� �ٸ�
		subjects[subjectCount].setSubjectName(name);  //���� ����
		subjects[subjectCount].setScorePoint(score);
		subjectCount++;  //���� ������ 1����
	}
}

//��� ���� ����ϱ� 
void Students::showInfo() {
	int sum = 0;     //����
	double average;  //���

	cout << "�й� : " << studentId
		<< "\n�̸� : " << studentName << endl;
	//������ ������ �̹Ƿ� �ݺ��� ���
	for (int i = 0; i < subjectCount; i++) {
		sum += subjects[i].getScorePoint();  //���� ��� 
	
		cout << subjects[i].getSubjectName()  //���� �̸�
			<< " ���� : " << subjects[i].getScorePoint() << "��\n";
	}
	cout << "------------------------\n";
	//���� ���
	cout << "���� : " << sum << "��" << endl;

	//��� ��� 
	average = (double)sum / subjectCount;

	cout << fixed;
	cout.precision(1);  //�Ҽ� ù°�ڸ����� ���
	cout << "------------------------\n";
	cout << "��� ���� : " << average << endl;
	cout << "------------------------\n";
}


