// 4 引用的本质.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;
/*
1 引用没有定义,是一种关系型声明。声明它和原有某一变量(实体)的关
系。故 而类型与原类型保持一致,且不分配内存。与被引用的变量有相同的地
址。
2 声明的时候必须初始化,一经声明,不可变更。
3 可对引用,再次引用。多次引用的结果,是某一变量具有多个别名。
4 &符号前有数据类型时,是引用。其它皆为取地址。
*/
int main()
{
	int a = 10;
	cout << "a的地址 = " << &a << endl;
	//pa指针指向a
	int *pa = (int *)a;
	cout << "指针变量 = " << pa << endl;

	int b = 20;
	a = b;
	cout << "a的地址 = " << &a << endl;
	cout << "指针变量 = " << pa << endl;

	int &c = a;
	cout << "c的引用 = " << c << endl;

	int &cc = c;

	cout << "cc = " << c << endl;
	cout << "&c = " << &c << endl;
	cout << "&cc = " << &cc << endl;

    return 0;
}

