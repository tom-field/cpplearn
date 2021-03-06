// 6 引用的本质.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct TypeA{
	int &a;
};

struct TypeB {
	int *a;
};

void motifyA(int *const a)   //常指针 也是一个常量， 也是必须要初始化，  也不能被修改
							// int *const a = main::&a;
{
	*a = 100;
}

void motifyB(int &a)  //当我们将引用作为函数参数传递的时候,编译器会替我们将实参区地址给引用
						// int &a = main::&a;
{
	a = 1000; //a 实际上是一个常量指针， 但是如果你给一个a赋值，编译器会有一个隐形的操作， *
}

struct Teacher
{
	int id;
	char name[64];
};

void motifyTeacher(Teacher &t) //
{
	t.id = 100; // 如果说t是一个常指针， *t 就是指针指向内存空间  (*t).id = 100
				//当你要试图修改或者获取已经初始化的引用的时候， 编译器会有一个隐藏的*的操作
}

int main()
{
	//TypeA中存引用 TypeB中存指针 大小相等
	cout << "sizeof(TypeA): " << sizeof(TypeA) << endl;
	cout << "sizeof(TypeB): " << sizeof(TypeB) << endl;

	//引用需要初始化,常量也要初始化,引用可能是一种常量
	//int &ra; int const ra; 都编译不通过
	int a = 10;
	int &ra = a;
	cout << ra << endl;

	//根据上面两点,引用可能是一个常指针
	int *const pa = &a;

	Teacher t1 = { 1, "zhangsan" };
	motifyTeacher(t1);
    return 0;
}

