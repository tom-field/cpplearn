// 4 类的声明和实现分开.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Circle.h"
#include "Point.h"
using namespace std;

int main()
{
	Circle c(0, 0, 3);
	Point p(2, 2);
	bool xiangjiao = c.judgePoint(p);
	cout << "是否相交 = " << xiangjiao << endl;
    return 0;
}

