// namespance.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
// 第二种引入命名函数
using std::cout;
using std::endl;

// 第三种是引入整个命名空间
using namespace std;

// 如何定义一个命名空间?
namespace namespaceA
{
	char a = 'H';
	int b = 20;
	void test() {
		cout << "test" << endl;
	}
}
using namespace namespaceA;

//定义多重命名空间
namespace namespaceB
{
	int a = 20;

	namespace namespaceC
	{
		struct teacher
		{
			int id;
			char name[64];
		};
	}

	namespace namespaceD
	{
		struct teacher
		{

		};
	}
}
using namespace namespaceB::namespaceC;

int main()
{
	cout << a << endl;
	cout << b << endl;
	test();
	
	teacher t;
	// 第一种使用命名空间变量的方式
	std::cout << "hello world" << std::endl;
	return 0;
}
