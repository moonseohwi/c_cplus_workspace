#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car {
private:
	string model;  //�𵨸�
	int year;      //����

public:
	//�⺻ �Ű� ������ ����ϸ� �⺻ ������ ���� 
	//�⺻ �Ű� ������ ����ο��� ����ϰ� �����ο��� ������� ����
	//�⺻ �����ڿ� �Ű� ������ �ִ� �����ڸ� ���ÿ� ������
	Car(string model = "", int year = 0);

	void setModel(string model);
	void setYear(int year);
	void carInfo();
};

#endif
