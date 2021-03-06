// 04 父类指针和子类指针的步长.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Parent
{
public:
	Parent(int a)
	{
		this->a = a;
	}

	virtual void print()
	{
		cout << "Parent::print() " << a << endl;
	}
protected:
	int a;
};

class Child :public Parent {
public:
	Child(int a) :Parent(a)
	{

	}

	virtual void print()
	{
		cout << "Child :: Print() " << a << endl;
	}
private:
	int c;
	int b;
};

int main()
{
	Child array[] = { Child(0), Child(1), Child(2) };
	Child *cp = &array[0];
	Parent *pp = &array[0];
	cp->print();
	pp->print();
#if 0
	cp++;  //指针的++ 并不是加1 cp + sizeOf(Child);
	pp++;  //pp + sizeOf(Parent);
	cp->print();
	pp->print();
#endif // 0

#if 0
	//不能用父亲的指针去索引子类对象 当父类对象和子类对象的块长不一样的时候
	int i = 0;
	for (pp = &array[0], i = 0; i < 3; i++, pp++)
	{
		pp->print();
	}

	return 0;
#endif // 0

#if 1

	int i = 0;
	for (cp = &array[0], i = 0; i < 3; i++, cp++)
	{
		cp->print();
	}
#endif // 0
	return 0;
}

