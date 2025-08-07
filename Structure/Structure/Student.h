#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

/*
	- C++의 구조체는 생성자와 멤버함수도 가질 수 있다.
	- 멤버 변수의 접근은 public이다.
*/

struct Student {
	string name;     //이름
	int grade;       //학년
	string address;  //주소
};

//함수 선언 - Student의 멤버 함수가 아니다.
void showInfo(Student& st);  //참조자(&) 사용!

#endif



