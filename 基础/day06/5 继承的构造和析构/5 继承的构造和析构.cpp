// 5 继承的构造和析构.cpp: 定义控制台应用程序的入口点。
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
		cout << "Parent(int a) ..." << endl;
	};
	~Parent()
	{
		cout << "~Parent()..." << endl;
	};
	void printA() {
		cout << "a = " << a << endl;
	}

private:
	int a;
};

class Child : public Parent
{
public:
	Child(int a,int b, char name[64]): Parent(a)
	{
		this->b = b;
		this->name = name;
		cout << "Son(int a, int b) ..." << endl;
	};
	~Child() 
	{
		//Parent p = Parent(b);//是一个新的parent对象。
		cout << "~Son() ..." << endl;
		if (name != NULL)
		{
			free(name);
			name = NULL;
		}
	};
	void printB()
	{
		cout << "b = " << b << endl;
	}

	void printAB()
	{
		printA();
		printB();
	}
private:
	int b;
	char *name;
};

void test1()
{
	Parent p(1);
	char *name = new char[64];
	strcpy(name, "zhangsan");
	Child c(1, 2,name);
	c.printAB();
}

int main()
{
	test1();
    return 0;
}

