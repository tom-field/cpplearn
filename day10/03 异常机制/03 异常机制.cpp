// 03 异常机制.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//异常基本语法
int divide(int x, int y)
{
	if (y == 0)
	{
		throw y;
	}
	return x / y;
}

void test01()
{
	try
	{
		divide(10, 0);
	}
	catch (int b) //异常时根据类型进行匹配
	{
		cout << b << endl;
	}
}

int main()
{
	test01();
    return 0;
}

