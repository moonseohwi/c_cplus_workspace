#include <iostream>
#include <string> //���ڿ� ó�� ���� �Լ� ���� ���̺귯��
using namespace std;

int main()
{
	string str = "Hello World";

	//���ڿ� ����
	cout << str.length() << endl; //11

	//���ڿ� �ε��� - ���ڷ� ��ȣ��
	cout << str.at(0) << endl;  //H
	cout << str[6] << endl;  //W

	//�ֹε�Ϲ�ȣ�� ���� ����
	string jumin = "030815-33567089";

	char genderDigit = jumin.at(7); //'4'

	switch (genderDigit) {
	case '1' : case '3':
		cout << "����\n";
		break;
	case '2': case '4' :
		cout << "����\n";
		break;
	default:
		cout << "�������� �ʴ� ����Դϴ�.\n";
		break;
	}

	return 0;
}