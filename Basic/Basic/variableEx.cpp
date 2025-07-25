#include <iostream>
using namespace std;  //이름 공간(소속) std로 선언

int main()
{
	//문자형 자료 
	char ch1 = 'A';
	char ch2 = 65;  //아스키 코드값 65는 A이다   <int ch2 = 65;로 하면 숫자 65가 나온다>
	char ch3[] = "사과";  //c언어 배열
	string str1 = "사과";  //c++ 자료형
	string str2 = "apple";

	cout << ch1 << " , " << ch2 << endl;   // A , A 
	cout << ch3 << endl;  //사과
	cout << str1 << " , " << str2 << endl;  //사과 , apple

	//bool 자료형
	bool val;
	val = true;

	cout << val << endl;  //1

	val = false;
	cout << val << endl;  //0

	//조건 연산의 결과값(bool) - (조건식) ? 참 : 거짓
	int fatherAge = 45;
	int motherAge = 47;
	char result1;
	bool b1;
	string result2;

	result1 = (fatherAge > motherAge) ? 'T' : 'F';
	cout << "결과값 : " << result1 << endl;  //결과값 : F

	b1 = (fatherAge > motherAge) ? true : false;
	cout << "결과값 : " << b1 << endl;  //결과값 : 0

	result2 = (fatherAge > motherAge) ? "엄마가 연하" : "엄마가 연상";
	cout << "결과값 : " << result2 << endl;  //결과값 : 엄마가 연상

	return 0;
}