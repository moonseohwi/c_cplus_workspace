#include "Student.h"
#include <iostream>
using namespace std;

void showInfo(Student& st) {
	cout << "�̸� : " << st.name << endl;
	cout << "�г� : " << st.grade << endl;
	cout << "�ּ� : " << st.address << endl;
	cout << "=================\n" << endl;
}