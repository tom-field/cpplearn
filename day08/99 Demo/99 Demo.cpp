// 99 Demo.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

typedef int(ARRAY_INT_10)[10];
int main()
{
	int array[10];
	ARRAY_INT_10 *p_array_int_10 = &array;
	cout << sizeof(array[0]) << endl;
	cout << sizeof(p_array_int_10) << endl;
    return 0;
}

