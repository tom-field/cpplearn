// 05 异常接口声明.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//这个函数只能抛出int float char三种类型异常,抛出其他的就报错
void func() throw(int, float, char)
{
	char a = 's';
	throw a;
}

//linux下不能抛出任何异常 windows正常编译运行
void func2() throw()
{
	throw -1;
}

//可以抛出任何类型异常
void func3()
{

}

int main()
{
	try
	{
		func();
	}
	catch (int e)
	{
		cout << "捕获int类型异常..." << endl;
	}
	catch (float e)
	{
		cout << "捕获float类型异常..." << endl;
	}
	catch (...)
	{
		cout << "捕获所有异常..." << endl;
	}

	try
	{
		func2();
	}
	catch (...)
	{
		cout << "func2 捕获所有异常" << endl;
	}

    return 0;
}

