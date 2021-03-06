// 09 继承在异常中的应用.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class BaseMyException{
public:
	virtual void what() = 0;
	virtual ~BaseMyException() {};
};

class TargetSpaceNullException :public BaseMyException {
public:
	virtual void what() {
		cout << "目标空间为空" << endl;
	};
	virtual ~TargetSpaceNullException() {};
};

class SourceSpaceNullException :public BaseMyException {
public:
	virtual void what() {
		cout << "源空间为空" << endl;
	};
	virtual ~SourceSpaceNullException() {};
};

void copy_str(char* target,const char* source)
{
	if (target == NULL)
	{
		//cout << "目标空间为空" << endl;
		//return;

		throw TargetSpaceNullException();
	}
	if (source == NULL)
	{
		//cout << "源空间为空" << endl;
		//return;

		throw SourceSpaceNullException();
	}
	//int len = strlen(source) + 1;
	while (*source != '\0')
	{
		*target = *source;
		target++;
		source++;
	}
}

int main()
{
	const char* source = "abcdefg";
	//char buf[1024];         //很多未初始化 所以这个打印有很多特殊符号
	char buf[1024] = { 0 };   //初始化为空字符串

	try
	{
		copy_str(NULL, source);
	}
	catch (BaseMyException& e)
	{
		e.what();
	}
	cout << buf << endl;

    return 0;
}

