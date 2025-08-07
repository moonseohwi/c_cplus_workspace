#include <iostream>
#include "Card.h"
using namespace std;

int main()
{
	//Card 인스턴스 생성
	/*
	//각자 구현
	Card card1("임시연");
	Card card2("우상영");
	Card card3("박상희");

	cout << "카드 번호 : " << card1.getCardNumber() << endl;
	cout << "카드 번호 : " << card2.getCardNumber() << endl;
	cout << "카드 번호 : " << card3.getCardNumber() << endl;
	*/

	//배열로 구현
	/*
	const int SIZE = 3;
	Card cardList[SIZE] = {
		Card("임시연"),
		Card("우상영"),
		Card("박상희")
	};

	cout << "=========== 카드 정보 출력 ===========\n"; 
	for (int i = 0; i < SIZE; i++) {
		cardList[i].printInfo();
	}
	*/

	//사용자 입력 처리 방법
	const int SIZE = 3;  
	Card cardList[SIZE];  //기본 생성자로 선언

	for (int i = 0; i < SIZE; i++) {
		string name;  //입력할 고객 이름
		cout << i + 1 << "번째 고객 이름 입력 : ";
		getline(cin, name);  //공백을 포함 입력 가능
		
		//생성자의 매개변수로 이름 입력
		cardList[i] = Card(name);
	}

	cout << "=========== 카드 정보 출력 ===========\n";
	for (int i = 0; i < SIZE; i++) {
		cardList[i].printInfo();
	}

	return 0;
}