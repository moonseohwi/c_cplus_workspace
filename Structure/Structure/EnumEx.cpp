#include <iostream>
using namespace std;
/*
	enum �ڷ��� - ������ ���
*/

enum MEDAL {
	GOLD = 1, //1   0���� �����ϱ� ������ ���� ���ڸ� 1�̶�� ������ 
	SILVER,   //2			
	BRONZE    //3			
};

int main()
{
	/*
	enum MEDAL medal;  //��� ����

	medal = SILVER;
	cout << medal << endl;   //2
	*/

	int medal;
	cout << "�޴� ����(�Է�: 1 ~ 3) : ";
	cin >> medal;

	switch (medal) {
	case GOLD : //1
		cout << "�ݸ޴� �Դϴ�.\n";
		break;
	case SILVER: //2
		cout << "���޴� �Դϴ�.\n";
		break;
	case BRONZE: //3
		cout << "���޴� �Դϴ�.\n";
		break;
	default:
		cout << "�޴��� �����ϴ�.\n";
		break;
	}

	return 0;
}