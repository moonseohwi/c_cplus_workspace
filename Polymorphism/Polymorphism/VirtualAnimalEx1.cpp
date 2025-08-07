#include <iostream>
using namespace std;
/*
	추상 클래스 
	- 구현할 수 없는 가상함수(추상함수)를 가지고 있는 클래스
	- 가상함수(추상함수)는 virtual 키워드를 붙임
*/

class Animal {
public:
	void breathe() {
		cout << "숨을 쉽니다.\n";
	}

	//가상 함수 선언 
	// 상속 받은 클래스에서 반드시 구현해야함(재정의)
	// 함수 뒤에 override 키워드를 붙임
	virtual void cry() = 0;  //가상 함수 virtual 선언
};

//Animal을 상속 받은 Cat 클래스
class Cat : public Animal {
public:
	void cry() override {  //override는 virtual이 있어서 재정의 해야할 때 써줌
		cout << "야 ~ 옹!!\n";
	}
};

//Animal을 상속받은 Dog 클래스 
class Dog : public Animal {
public:
	void cry() override {
		cout << "왈 ~ 왈!!\n";
	}
};

int main() 
{
	//Cat 생성자 호출
	Cat cat;
	cat.breathe();
	cat.cry();

	//Dog 생성자 호출
	Dog dog;
	dog.breathe();
	dog.cry();
	
	return 0;
}