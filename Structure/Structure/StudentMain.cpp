#include "Student.h"
#include <iostream>
using namespace std;

int main()
{
	//Student ����ü ����(�ν��Ͻ�)
	/*
	//���� ����
	Student st1;

	st1.name = "�̿���";
	st1.grade = 3;
	st1.address = "����� �����";

	showInfo(st1);
	*/

	//����ü �迭�� ����
	const int SIZE = 3;

	Student students[SIZE] = {
		{"������", 1, "����� �����"},
		{"��ȭ��", 2, "����� ���α�"},
		{"�ָ�", 3, "��⵵ �����ֽ�"},
	};

	cout << "========== �� �� �� �� ==========\n";
	for (int i = 0; i < SIZE; i++) {
		showInfo(students[i]);
	}

	return 0;
}