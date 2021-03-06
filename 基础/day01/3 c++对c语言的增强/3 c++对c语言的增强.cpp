// 3 c++对c语言的增强.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;
//c++对const的加强
//确实对a起了保护的作用，不能通过指针的间接赋值概念a的值
void test1()
{
	const int a = 10; //c++的const 确实对a起了保护的作用，不能通过指针的间接赋值概念a的值
					  //
					  //int const b; //const int , int const 是等价的

	int *p = (int*)&a; //当c++编译器 发现 对一个const的常量符号取地址，
	*p = 20;//C语言中可以通过指针的间接赋值改变const变量 
			//*p 是改变的临时的变量 而不是 常量a符号

	printf("a = %d\n", a);
	printf("%p", p);

	//打印指针
	int b = 30;
	int *pb = (int*)b;
	printf("%p", pb);
}

void test2() {
	//枚举增强 枚举定义
	enum Season
	{
		SPR = 1,
		SUM,
		AUT = 9,
		WIN
	};
	enum Season s = SPR;
	enum Season u = SUM;
	enum Season w = WIN;
	cout << s << endl;
	cout << u << endl;
	cout << w << endl;
	//printf打印枚举值
	printf("%d", w);
}

int main()
{
	//test1();
	//test2();

    return 0;
}

