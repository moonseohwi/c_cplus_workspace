#include <iostream>
using namespace std;
/*
	enum 자료형 - 열거형 상수
*/

enum MEDAL {
	GOLD = 1, //1   0부터 시작하기 때문에 시작 숫자를 1이라고 정해줌 
	SILVER,   //2			
	BRONZE    //3			
};

int main()
{
	/*
	enum MEDAL medal;  //상수 선언

	medal = SILVER;
	cout << medal << endl;   //2
	*/

	int medal;
	cout << "메달 선택(입력: 1 ~ 3) : ";
	cin >> medal;

	switch (medal) {
	case GOLD : //1
		cout << "금메달 입니다.\n";
		break;
	case SILVER: //2
		cout << "은메달 입니다.\n";
		break;
	case BRONZE: //3
		cout << "동메달 입니다.\n";
		break;
	default:
		cout << "메달이 없습니다.\n";
		break;
	}

	return 0;
}