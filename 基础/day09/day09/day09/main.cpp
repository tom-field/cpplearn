// day09.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#if 0

//int 类型数据交换
void MySwap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//double 类型数据交换
void MySwap(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

#endif // 0

//模板技术 类型参数化 编写代码可以忽略类型
//为了让编译器区分是普通函数 模板函数
template<class T>  // template<typename T>
void MySwap(T& a, T&b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01() {
	//1.自动类型推导
	int a = 10;
	int b = 20;
	cout << a << ' ' << b << endl;
	MySwap(a, b);
	cout << a << ' ' << b << endl;

	double da = 1.13;
	double db = 2.34;
	cout << da << ' ' << db << endl;
	MySwap(da, db);
	cout << da << ' '<< db << endl;

	//2.显式的指定类型
	cout << a << ' ' << b << endl;
	MySwap<int>(a, b);
	cout << a << ' ' << b << endl;
}


int main()
{
	test01();
    return 0;
}

