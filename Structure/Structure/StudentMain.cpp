#include "Student.h"
#include <iostream>
using namespace std;

int main()
{
	//Student 구조체 변수(인스턴스)
	/*
	//각각 넣음
	Student st1;

	st1.name = "이우주";
	st1.grade = 3;
	st1.address = "서울시 노원구";

	showInfo(st1);
	*/

	//구조체 배열로 넣음
	const int SIZE = 3;

	Student students[SIZE] = {
		{"김지구", 1, "서울시 노원구"},
		{"박화성", 2, "서울시 종로구"},
		{"최목성", 3, "경기도 남양주시"},
	};

	cout << "========== 학 생 명 단 ==========\n";
	for (int i = 0; i < SIZE; i++) {
		showInfo(students[i]);
	}

	return 0;
}