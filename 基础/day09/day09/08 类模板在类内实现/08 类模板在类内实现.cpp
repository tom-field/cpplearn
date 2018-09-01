// 08 类模板在类内实现.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

template<class T1,class T2>
class Person {
public:
	Person(T1 name, T2 age) {
		this->mAge = age;
		this->mName = name;
	}
	void show() {
		cout << "name:" << mName << "age" << mAge << endl;
	}
public:
	T1 mName;
	T2 mAge;
};


void test01()
{
	Person<string, int> p("AAA", 20);
	p.show();
}

int main()
{
	test01();
    return 0;
}

