#include "Students.h"

int main()
{
	//�ν��Ͻ� ����
	Students park(1001, "�ڻ���");

	//���� ����
	park.addSubject("����", 85);
	park.addSubject("����", 52);
	park.addSubject("����", 82);

	//���� ��� 
	park.showInfo();

	return 0;
}