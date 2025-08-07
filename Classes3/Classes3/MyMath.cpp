#include <iostream>
using namespace std;

/*
	static이 있는 멤버함수 정의 
*/

class  MyMath {
public:
	//절대값 계산
	static int abs(int x) {
		return (x < 0) ? -x : x;
	}

	//최소값 - 두 수 비교
	static int min(int x, int y) {
		return (x < y) ? x : y;
	}
};

int main()
{
	/*
	//인스턴스형 클래스 생성 방식
	MyMath math1;   
	cout << "절대값 : " << math1.abs(-6) << endl;   //6
	*/

	//스택틱형 클래스 생성 방식 (static이 있는 멤버함수는 클래스 이름으로 직접 접근함)
	cout << "절대값 : " << MyMath::abs(-6) << endl; //6

	cout << "10과 20중 작은 수 : " << MyMath::min(10, 20) << endl;  //10

	return 0;
}