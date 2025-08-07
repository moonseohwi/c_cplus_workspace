#include <iostream>
using namespace std;
/*
	template(템플릿)은 함수나 클래스 코드를 찍어내듯이 
	생산할 수 있도록 일반화(generic) 시키는 도구(틀)이다. 
*/

class Math {
public:
	//절대값을 구하는 함수
	//템플릿의 T 자료형 선언할 때 사용
	template <typename T>
	static T abs(T x) {  //정적 함수
		return (x < 0) ? -x : x;
	}

	//두 수중 큰 값을 구하는 함수
	template <typename T>
	static T max(T x, T y) {
		return (x > y) ? x : y;
	}
	
};

int main()
{
	cout << Math::abs(-10) << endl;
	cout << Math::abs(-3.5) << endl;  //실수(double type)이 지원됨

	cout << Math::max(10, 20) << endl;  //20
	cout << Math::max(5.4, 2.3) << endl;  //5.4


	return 0;
}