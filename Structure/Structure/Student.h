#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

/*
	- C++�� ����ü�� �����ڿ� ����Լ��� ���� �� �ִ�.
	- ��� ������ ������ public�̴�.
*/

struct Student {
	string name;     //�̸�
	int grade;       //�г�
	string address;  //�ּ�
};

//�Լ� ���� - Student�� ��� �Լ��� �ƴϴ�.
void showInfo(Student& st);  //������(&) ���!

#endif



