#ifndef DRINK_H
#define DRINK_H
#include <string>
using namespace std;


class Drink {
protected:
	string name;  //상품명
	int price;    //가격
	int quantity;  //수량

public:
	Drink(string name, int price, int quantity);

	int calcPrice();          //금액 계산
	static void printTitle(); //제목 출력
	void printData();         //데이터 출력
};

#endif
