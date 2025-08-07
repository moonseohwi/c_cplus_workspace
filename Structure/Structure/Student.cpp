#include "Student.h"
#include <iostream>
using namespace std;

void showInfo(Student& st) {
	cout << "이름 : " << st.name << endl;
	cout << "학년 : " << st.grade << endl;
	cout << "주소 : " << st.address << endl;
	cout << "=================\n" << endl;
}