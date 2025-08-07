#include <iostream>
#include <vector>
using namespace std;
/*
	auto 자료형 - 변수 선언시에 변수의 타입을 결정하도록 지시한다.
	              auto는 변수의 타입을 자동 추론할 수 있음
*/

int main()
{
	auto ch = 'K';     //문자 1개(char)
	auto num = 12;     //정수형(int)
	auto unit = 2.54;  //실수형(double)
	auto* ip = &num;   //정수형 포인터

	cout << ch << " , " << num << " , " << unit
		<< " , " << *ip << endl;

	vector<int> vec = { 1,2,3 };

	for (auto v : vec)
		cout << v << " ";  //가로로 나옴
	  //cout << v << endl;   세로로 나옴

	return 0;
}