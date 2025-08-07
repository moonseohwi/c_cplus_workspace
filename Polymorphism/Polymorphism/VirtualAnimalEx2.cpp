#include <iostream>
using namespace std;
/*
	�߻� Ŭ����
	- ������ �� ���� �����Լ�(�߻��Լ�)�� ������ �ִ� Ŭ����
	- �����Լ�(�߻��Լ�)�� virtual Ű���带 ����
	- ���� �Ҹ��ڸ� �ݵ�� ó���ؾ� ��
	- �Ҹ��� �տ� virtual�� �ٿ��� ��
*/

class Animal {
public:
	//Animal(){}  //�⺻ ������ ���� ����
	virtual ~Animal(){}  //���� �Ҹ���

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

	~Cat() override{
		cout << "Cat �Ҹ��� ȣ���\n";
	}
};

//Animal�� ��ӹ��� Dog Ŭ���� 
class Dog : public Animal {
public:
	void cry() override {
		cout << "�� ~ ��!!\n";
	}

	~Dog() override {
		cout << "Dog �Ҹ��� ȣ���\n";
	}
};

int main()
{
	//���� ��ü(�ν��Ͻ�) ����
	//���⼺�� �θ� �ڷ������� �ν��Ͻ��� ������
	//�θ��ڷ�(Animal)�� �� Ů�ϴ�. �θ� �� ũ�� �ڵ�����ȯ��  <�ڽ��ڷ�:cat,dog>
	Animal* cat = new Cat;
	Animal* dog = new Dog;

	//��� ����
	cat->cry();
	dog->cry();


	delete cat;   //�޸� ����
	delete dog;


	return 0;
}