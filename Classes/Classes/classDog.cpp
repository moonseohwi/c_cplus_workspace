#include <iostream>
using namespace std;
/*
	Ŭ����(class)
	- �繰(��ü)�� �߻�ȭ�� �ڷ����̴�.
	- �繰�� �Ӽ�(�������)�� ���(����Լ�)�� ������ �ִ�.
	- Ŭ���� �̸��� ù���ڰ� �빮����
	- Ķ��ȭ�� ���� ���������ڰ� ����
		(���������� -> privator : ���ٺ���, public : �������)
*/

//Dog Ŭ���� ����
class Dog {
public:
	//��� ����
	string type;  //������ ����
	int age;      //������ ����

	//������ ���� ���
	void showInfo() {
		cout << "������ ���� : " << type << endl;
		cout << "������ ���� : " << age << endl;
	}
};


int main()
{
	//Ŭ���� ��� - �ν��Ͻ��� ����
	//�ν��Ͻ��� ����� ���� - ��(.)������ ���
	Dog dog1;
	dog1.type = "Ǫ��";
	dog1.age = 6;
	dog1.showInfo();

	Dog dog2;
	dog2.type = "������";
	dog2.age = 10;
	dog2.showInfo();

	return 0;
}