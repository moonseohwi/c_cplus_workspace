#include "Student.h"

int main()
{
	//�л� �ν��Ͻ� ����
	Student lee(1001, "������");
	Student shin(1002, "������");

	//���� ����
	lee.setKoreanSubject("����", 85);
	lee.setMathSubject("����", 90);

	shin.setKoreanSubject("����", 20);
	shin.setMathSubject("����", 29);

	//�л��� ���� ���
	lee.showInfo();
	shin.showInfo();

	return 0;
}