// 06 类模板派生类模板.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

template<class T>
class Animal
{
public:
	void jiao() {
		cout << mAge << "岁动物在叫!" << endl;
	}
public:
	T mAge;
};

template<class T>
class Cat : public Animal<T>
{
public:

private:

};


int main()
{
	Cat<int> cat;
	cat.jiao();
    return 0;
}

