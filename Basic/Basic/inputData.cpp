#include <iostream>
#include <string>  //getline() ���
using namespace std;
/*
	cin >> ����
	cin ��Ʈ������ ���� �����͸� ������ ���� ����
*/
int main()
{
	int number; //�л��� �й�
	string address;  //�ּҸ� ������ ���ڿ� ���� ����
	
	cout << "�й� �Է� : ";
	cin >> number;

	cout << "�ּ� �Է� : ";
	//cin >> address;
	cin.ignore();   //������ �Էµ� ���๮��('\n') ���� ����, getline()�� �������� �� ���� . ���๮�� �������� ������0
	//c��� - while(getchar() != '\n')
	getline(cin, address);  //getline(stream, str)����

	cout << "�й� : " << number << endl;
	cout << "�ּ� : " << address << endl;

	return 0;
}