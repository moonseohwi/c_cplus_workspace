#include <iostream>
using namespace std;

/*
	�⺻ �Ű� ����(default parameter)
	- �⺻���� ������ �Լ��� �谳������
	- ȣ��� �����ϸ� �⺻���� ���޵�
*/

void take(int busNumber, int fee = 1500) {
	cout << busNumber << "�� ���� ��� : " << fee << "��\n";
}

int main()
{
	take(101);  //�Ű����� ���� �����ϸ� �⺻���� ��µ� <�⺻�� ������ ���� * int fee = 1500 * ���� 1500�� �����ϸ� ��>
	take(101, 1600);
	take(740);

	return 0;
}