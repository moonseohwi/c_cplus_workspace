#include "Person.h"
#include <iostream>
using namespace std;

int main()
{
	//�ν��Ͻ� ����
	Person woo("�쿵��", 10000);
	Person han("�Ѱ�", 2000);
	Bus bus600(600, 1500);  //Bus bus600(600);����

	//���� ž�� 
	woo.takeBus(bus600);
	han.takeBus(bus600);

	//���� ���
	woo.displayInfo();
	han.displayInfo();
	bus600.displayInfo();

	return 0;
}