#include "Cat.h"
#include "Dog.h"

int main()
{
	//���� ��ü ����(���⼺ ����)
	Aniaml* cat = new Cat;
	Animal* dog = new Dog;

	//��� ����
	cat->breathe();
	cat->cry();

	dog->breathe();
	dog->cry();

	delete cat;
	delete dog;

	return 0;
}