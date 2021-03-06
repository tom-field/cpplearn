// 6 类和对象.cpp: 定义控制台应用程序的入口点。
//
#define  _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <iostream>
using namespace std;

//定义一个性别枚举
enum SEX
{
	MAN,
	FEMALE,
	UNKONW,
};

//定义一个类
struct  Hero
{
public:
	enum SEX sex;
	char name[64];

};

//定义一个类的关键字
class AdvHero //定义一个类名
{
public: //访问控制符  访问权限
	enum SEX sex;
	char name[64]; //成员变量


				   //成员函数
	void printHero()
	{
		cout << "性别:" << sex << endl;
		cout << "姓名" << name << endl;
	}
};

//定义一个animal类
class Animal {
public:
	char color[64];
	char kind[64];

	//拥有写字的成员函数
	void write()
	{
		cout << kind << "开始写字了" << endl;
	}

	//拥有跑步的方法
	void run()
	{
		cout << kind << "跑步了" << endl;
	}
};

int main(void)
{
	struct Hero chunBro;

	chunBro.sex = MAN;
	strcpy_s(chunBro.name, "chunBro");


	AdvHero gailun; //通过AdvHero类 创建一个对象。
	gailun.sex = MAN;
	strcpy_s(gailun.name, "盖伦");


	/*
	cout << "性别" << gailun.sex << endl;
	cout << "姓名:" << gailun.name << endl;
	*/

	gailun.printHero();//通过对象 直接调用成员函数


	Animal dog;
	Animal sheep;

	strcpy_s(dog.kind, "狗");
	strcpy_s(dog.color, "黄色");

	dog.run();
	dog.write();

	strcpy_s(sheep.kind, "羊");
	strcpy_s(sheep.color, "白");

	sheep.run();
	sheep.write();



	return 0;
}

