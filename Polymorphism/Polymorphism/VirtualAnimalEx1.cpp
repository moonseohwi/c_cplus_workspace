#include <iostream>
using namespace std;
/*
	�߻� Ŭ���� 
	- ������ �� ���� �����Լ�(�߻��Լ�)�� ������ �ִ� Ŭ����
	- �����Լ�(�߻��Լ�)�� virtual Ű���带 ����
*/

class Animal {
public:
	void breathe() {
		cout << "���� ���ϴ�.\n";
	}

	//���� �Լ� ���� 
	// ��� ���� Ŭ�������� �ݵ�� �����ؾ���(������)
	// �Լ� �ڿ� override Ű���带 ����
	virtual void cry() = 0;  //���� �Լ� virtual ����
};

//Animal�� ��� ���� Cat Ŭ����
class Cat : public Animal {
public:
	void cry() override {  //override�� virtual�� �־ ������ �ؾ��� �� ����
		cout << "�� ~ ��!!\n";
	}
};

//Animal�� ��ӹ��� Dog Ŭ���� 
class Dog : public Animal {
public:
	void cry() override {
		cout << "�� ~ ��!!\n";
	}
};

int main() 
{
	//Cat ������ ȣ��
	Cat cat;
	cat.breathe();
	cat.cry();

	//Dog ������ ȣ��
	Dog dog;
	dog.breathe();
	dog.cry();
	
	return 0;
}