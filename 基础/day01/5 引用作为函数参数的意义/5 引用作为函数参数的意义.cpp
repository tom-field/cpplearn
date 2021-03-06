#include "stdafx.h"
#include <iostream>

using namespace std;

struct Teacher
{
	int id;
	char name[64];
};

//参数中可以不写struct
void printT(struct Teacher t) {
	cout << "id = " << t.id << endl;
	cout << "name = " << t.name << endl;
	t.id = 100;
}

//指针指向t1的地址
void printT2(Teacher *t) {
	cout << t << endl;
	cout << "id = " << t->id << endl;
}

//传入t1的引用  
void printT3(Teacher &t) { //Teacher &t = t1;  t 就是t1的一个别名
	cout << "id = " << t.id << endl;
}

int main(void)
{
	Teacher t1 = { 1,"张三" };

	printT(t1);
	//打印出来仍然是1,所以printT中的t是t1的拷贝
	cout << "t1的id = " << t1.id << endl;
	
	//传入t1的地址
	printT2(&t1);
	Teacher *pt1 = &t1;
	cout << pt1 << endl;

	printT3(t1);

	return 0;
}