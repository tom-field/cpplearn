// 7 引用作为函数返回值.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int getA1()
{
	int a = 10;
	return a;
} //value_a = a; 

int &getA2()
{
	int a = 10;
	return a;
} //匿名的引用 int & = a;  //  int &temp = &a;

int &getA3()
{
	static int a = 10;  //a 存储在静态区
	return a;
}

int main()
{
	int value_a = 0;
	value_a = getA1();
	cout << "value_a " << value_a << endl;

	int tmpA = getA2();
	cout << "tmpA = " << tmpA << endl;

	//当函数返回值，是一个局部变量的引用的时候，不能再用引用来接收。
	int &ra = getA2(); //warning C4172: 返回局部变量或临时变量的地址: a
	cout << "ra = " << ra << endl;

	//当函数返回值，不是子函数内部局部变量，就可以用引用进行接收，
	int &ra2 = getA3();
	cout << "ra = " << ra2 << endl;

	//当引用作为函数的返回值的时候，只要这个引用是合法的，就可以当左值。
	getA3() = 20;

    return 0;
}

