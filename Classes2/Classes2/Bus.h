//TransportMain.cpp 보조

#ifndef BUS_H
#define BUS_H

class Bus {
private:
	int busNumber;  //버스 번호
	int passenger;  //승객 수
	int money;      //수입
	const int FEE;  //버스 요금(상수)

public:
	//기본 매개변수 사용 (초기값은 선언부에만 넣음 , cpp는 부연부기 때문에 넣으면 안됨)
	Bus(int busNumber, int FEE = 1500);

	void take();         //승객 태우기
	int getFEE();        //요금 가져오기
	void displayInfo();  //버스 정보

};
#endif // !1
