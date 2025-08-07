#include <iostream>
using namespace std;

void swapVal(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swapRef(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	//참조자 - 기존의 메모리에 별명(alias)을 붙이는 방법 <포인터와 유사함>

	int x = 10, y = 20;

	cout << "값에 의한 호출\n";
	swapVal(x, y);
	cout << "x = " << x << ", y = " << y << endl;

	cout << "참조에 의한 호출\n";
	swapRef(x, y);
	cout << "x = " << x << ", y = " << y << endl;



	/*
	int n = 1;
	int& x = n;  //자료형 뒤에 참조연산자(&)를 붙이고 별칭을 만듬
	int& y = n;

	cout << "x= " << x << endl;  //1
	cout << "y= " << y << endl;  //1

	x = 3;
	cout << "x= " << x << endl;  //3
	cout << "y= " << y << endl;  //3
	cout << "n= " << n << endl;  //3
	*/

	return 0;
}