// 07 动物园案例.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

void AnimalVoice(Animal *ap)
{
	ap->voice();
}

int main()
{
	Dog *dog = new Dog();
	Cat *cat = new Cat();
	dog->voice();
	cat->voice();

	delete dog;
	delete cat;

    return 0;
}

