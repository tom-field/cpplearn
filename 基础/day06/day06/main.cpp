// day06.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
public:
	A() {
	
	};
	~A() {
	
	};
	void funcA() {
		cout << "func A ..." << endl;
	}

private:

};
//A对于B类 是充当一个成员变量， B has A   包含关系 A 属于B
class B
{
public:
	B() {
		a.funcA();
	};
	~B() {
		
	};

private:
	A a;
};

//如果C中某一个成员函数 是依赖于A类形参， 将A类当一个形参传递进来
//C use A
class C
{
public:
	C() {

	};
	~C() {
	
	};
	void func(A *a) {
		a->funcA();
	}
private:

};

//类D  继承于 类A
//类D  继承于A  就说明  D is A
class D : public A	
{
public:
	D(){
		this->funcA();
	};
	~D() {
	
	};

private:

};

int main()
{
	A a;
	a.funcA();
	B b;
	C c;
	c.func(&a);
	D d;

    return 0;
}

