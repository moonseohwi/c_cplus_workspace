#include "Drink.h"
#include <iostream>
using namespace std;

//생성자 초기화 목록 구현
Drink::Drink(string name, int price, int quantity) :
	name(name), price(price), quantity(quantity){}

int Drink::calcPrice() {
	return price * quantity;
}

//static 사용 못함
void Drink::printTitle() {
	cout << "상품명\t가격\t수량\t금액\n";
}

void Drink::printData() {
	cout << name << "\t" << price << "\t" 
		<< quantity << "\t" << calcPrice() << endl;
}