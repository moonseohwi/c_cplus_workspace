#include "Alcohol.h"
#include <iostream>
using namespace std;

//생성자 초기화 목록 - 상속받기
Alcohol::Alcohol(string name, int price, int quantity, float alcper) :
	Drink(name, price, quantity), alcper(alcper){}

void Alcohol::printTitle() {
	cout << "상품명(도수[%]\t가격\t수량\t금액\n";
}

void Alcohol::printData() {
	cout << name << "(" << alcper << ")\t" << price << "\t"
		<< quantity << "\t" << calcPrice() << endl;
}