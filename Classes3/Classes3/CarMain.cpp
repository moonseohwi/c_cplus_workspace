#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
	//�Ű����� �ִ� �����ڷ� ���� ��ü ����
	Car* car1 = new Car("EV6", 2024);

	//�⺻ �����ڷ� ���� ��ü ����
	Car* car2 = new Car();

	//�� ���� �Է�
	car2->setModel("Sonata");
	car2->setYear(2020);

	//�� ���� ���
	car1->carInfo();  //�������̹Ƿ� ȭ��ǥ ��ȣ ��� 
	car2->carInfo(); 

	delete car1;  //�޸� ����(��ȯ)
	delete car2; 

	return 0;
}