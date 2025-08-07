#ifndef ALCOHOL_H
#define ALCOHOL_H
#include "Drink.h"

//Drink를 상속 받기
class Alcohol : public Drink{
private:
	float alcper;  //알콜 도수

public:
	//부모 변수 모두 가져옴
	Alcohol(string name, int price, int quantity, float alcper);

	static void printTitle();
	void printData();
};

#endif 

