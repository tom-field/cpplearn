// 03 企业员工管理系统.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main(void)
{

	// CTODO visual studio 2017 头文件引入
	Employee * person_array[] = { new Technician, new Manager, new SaleMan, new SalesManager };


	for (int i = 0; i < sizeof(person_array) / sizeof(person_array[0]); i++) {
		person_array[i]->init();
		person_array[i]->getPay();
		person_array[i]->uplevel(1);
		person_array[i]->displayStatus();
	}

	for (int i = 0; i < sizeof(person_array) / sizeof(person_array[0]); i++)
	{
		delete person_array[i];
	}


	return 0;
}
