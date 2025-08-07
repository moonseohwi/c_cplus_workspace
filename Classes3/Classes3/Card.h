#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

class Card {
private:
	static int serialNum;  //기준 번호 (카드 번호 자동생성을 위해 필요함)
	string name;      //고객 이름
	int cardNumber;   //개별 카드 번호 

public:
	Card();  //기본 생성자
	Card(string name);

	int getCardNumber();  //카드 번호 가져오기 
	void printInfo();     //카드 정보 출력

};




#endif
