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
	//������ - ������ �޸𸮿� ����(alias)�� ���̴� ��� <�����Ϳ� ������>

	int x = 10, y = 20;

	cout << "���� ���� ȣ��\n";
	swapVal(x, y);
	cout << "x = " << x << ", y = " << y << endl;

	cout << "������ ���� ȣ��\n";
	swapRef(x, y);
	cout << "x = " << x << ", y = " << y << endl;



	/*
	int n = 1;
	int& x = n;  //�ڷ��� �ڿ� ����������(&)�� ���̰� ��Ī�� ����
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