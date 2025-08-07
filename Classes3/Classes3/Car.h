#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car {
private:
	string model;  //모델명
	int year;      //연식

public:
	//기본 매개 변수를 사용하면 기본 생성자 구현 
	//기본 매개 변수는 선언부에만 명시하고 구현부에는 사용하지 않음
	//기본 생성자와 매개 변수가 있는 생성자를 동시에 선언함
	Car(string model = "", int year = 0);

	void setModel(string model);
	void setYear(int year);
	void carInfo();
};

#endif
