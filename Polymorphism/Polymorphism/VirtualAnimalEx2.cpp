#include <iostream>
using namespace std;
/*
	추상 클래스
	- 구현할 수 없는 가상함수(추상함수)를 가지고 있는 클래스
	- 가상함수(추상함수)는 virtual 키워드를 붙임
	- 가상 소멸자를 반드시 처리해야 함
	- 소멸자 앞에 virtual를 붙여야 함
*/

class Animal {
public:
	//Animal(){}  //기본 생성자 생략 가능
	virtual ~Animal(){}  //가상 소멸자

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

	~Cat() override{
		cout << "Cat 소멸자 호출됨\n";
	}
};

//Animal을 상속받은 Dog 클래스 
class Dog : public Animal {
public:
	void cry() override {
		cout << "멍 ~ 멍!!\n";
	}

	~Dog() override {
		cout << "Dog 소멸자 호출됨\n";
	}
};

int main()
{
	//동적 객체(인스턴스) 생성
	//다향성은 부모 자료형으로 인스턴스를 생성함
	//부모자료(Animal)가 더 큽니다. 부모가 더 크면 자동형변환됨  <자식자료:cat,dog>
	Animal* cat = new Cat;
	Animal* dog = new Dog;

	//기능 구현
	cat->cry();
	dog->cry();


	delete cat;   //메모리 해제
	delete dog;


	return 0;
}