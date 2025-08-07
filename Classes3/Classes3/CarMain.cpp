#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
	//매개변수 있는 생성자로 동적 개체 생성
	Car* car1 = new Car("EV6", 2024);

	//기본 생성자로 동적 객체 생성
	Car* car2 = new Car();

	//차 정보 입력
	car2->setModel("Sonata");
	car2->setYear(2020);

	//차 정보 출력
	car1->carInfo();  //포인터이므로 화살표 기호 사용 
	car2->carInfo(); 

	delete car1;  //메모리 해제(반환)
	delete car2; 

	return 0;
}