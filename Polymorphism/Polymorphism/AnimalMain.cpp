#include "Cat.h"
#include "Dog.h"

int main()
{
	//동적 객체 생성(다향성 구현)
	Aniaml* cat = new Cat;
	Animal* dog = new Dog;

	//기능 구현
	cat->breathe();
	cat->cry();

	dog->breathe();
	dog->cry();

	delete cat;
	delete dog;

	return 0;
}