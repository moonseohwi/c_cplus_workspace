#include <iostream>
#include "Card.h"
using namespace std;

//정적 변수는 클래스의 외부에서 한 번만 정의한다.
int Card::serialNum = 1000;

//기본 생성자 구현
Card::Card(){}

Card::Card(string name) {  //생성자 
	this->name = name;
	serialNum++;  //1증가 시킴
	cardNumber = serialNum;
}

int Card::getCardNumber() {  //함수 구현
	return cardNumber;
}

void Card::printInfo() {
	cout << "고객 이름 : " << name
		<< ", 카드 번호 : " << cardNumber << endl;
}
