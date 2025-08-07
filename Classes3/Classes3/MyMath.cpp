#include <iostream>
using namespace std;

/*
	static�� �ִ� ����Լ� ���� 
*/

class  MyMath {
public:
	//���밪 ���
	static int abs(int x) {
		return (x < 0) ? -x : x;
	}

	//�ּҰ� - �� �� ��
	static int min(int x, int y) {
		return (x < y) ? x : y;
	}
};

int main()
{
	/*
	//�ν��Ͻ��� Ŭ���� ���� ���
	MyMath math1;   
	cout << "���밪 : " << math1.abs(-6) << endl;   //6
	*/

	//����ƽ�� Ŭ���� ���� ��� (static�� �ִ� ����Լ��� Ŭ���� �̸����� ���� ������)
	cout << "���밪 : " << MyMath::abs(-6) << endl; //6

	cout << "10�� 20�� ���� �� : " << MyMath::min(10, 20) << endl;  //10

	return 0;
}