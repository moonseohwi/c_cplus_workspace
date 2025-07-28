#include <iostream>
using namespace std;
/*
	생성자 (constructor)
	- 클래스의 필수 요소
	- 생성자 이름은 클래스와 동일하다. (함수는 아니다)
	- 생성자는 기본생성자와 매개변수가 있는 생성자로 분류한다.
	- 생성자가 기본 생성자일 경우 생략 가능하고,
	  대신 컴파일러가 자동으로 생성자를 생성한다.

	소멸자(destructor)
	- 필수 요소
	- 생성자 이름은 클래스와 동일하다. 앞에 ' ~ '을 붙임
	- 소멸자가 정의되어 있지 않으면 컴파일러가 자동으로 기본 소멸자를 제공한다.
*/

//Dog 클래스 정의
class Dog {
public:
	//멤버 변수
	string type;  //강아지 종류
	int age;      //강아지 나이

	Dog() {}   //기본 생성자

	Dog(string t, int a) { //매개변수가 있는 생성자
		type = t;  //외부에서 입력한 타입을 멤버에 저장
		age = a;   //외부에서 입력한 나이를 멤버에 저장
	}

	//소멸자 (없어도 됨!!)
	~Dog() {
		cout << "객체가 소멸합니다.\n";
	}

	//강아지 정보 출력
	void showInfo() {
		cout << "강아지 종류 : " << type << endl;
		cout << "강아지 나이 : " << age << endl;
	}

	void bark() {
		cout << "왈~! 왈~~!!\n";
	}
};


int main()
{
	//클래스 사용 - 인스턴스를 생성
	//인스턴스로 멤버에 접근 - 점(.)연산자 사용
	Dog dog1;   //Dog dog1()와 같고 기본생성자로 인스턴스 생성
	dog1.type = "푸들";
	dog1.age = 6;
	dog1.showInfo();

	Dog dog2("진돗개", 3);  //매개변수가 있는 생성자로 인스턴스 생성
	dog2.showInfo();
	dog2.bark();

	return 0;
}