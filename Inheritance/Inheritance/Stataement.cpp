#include <iostream>
#include "Drink.h"
#include "Alcohol.h"
using namespace std;

int main()
{
	//Drink 생성자 호출
	Drink coffee("커피", 2500, 4);
	Drink tea("녹차", 300, 3);

	//Alcohol 생성자 호출
	Alcohol soju("소주", 3500, 2, 14.3f);

	Drink::printTitle();  //static 이므로 공유
	coffee.printData();
	soju.printData();
	tea.printData();

	//매출금액의 총 합계
	int total = coffee.calcPrice() + tea.calcPrice() + 
				soju.calcPrice();

	cout << "*********합계 금액 : " << total << "원**********" << endl;

	return 0;
}