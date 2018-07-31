// 2 如何区分成员变量属于谁.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Test
{
public:
	Test(int i)
	{
		mI = i;
	}

	int getI()
	{
		return mI;
	}
private:
	int mI;
};

#if 0
struct Test
{
	int mI;
};

void Test_init(Test &test, int x)
{
	test.mI = x;
}

int Test_getI(Test &test)
{
	return test.mI;
}
#endif // 0

#if 0
struct Test
{
	int mI;
};

void Test_init(Test *pthis, int x)
{
	pthis->mI = x;
}

int Test_getI(Test *pthis)
{
	return pthis->mI;
}
#endif // 0



int main(void)
{
	Test t1(10);
	t1.getI();

	//Test t1;
	//Test_init(&t1, 10);
	//cout << Test_getI(&t1) << endl;

	return 0;
}

