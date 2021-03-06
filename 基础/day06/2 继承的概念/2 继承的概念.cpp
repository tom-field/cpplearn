// 2 继承的概念.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
	Student(int id, char *name) {
		this->id = id;
		this->name = name;
	};
	~Student() {
		
	};
	void printS() {
		cout << "id =  " << id << " name  =" << name << endl;
	}
private:
	string name;
	int id;
};

//想给学生新增个属性分数,用C语言的方式
class Student2
{
public:
	Student2(int id, string name,int score) {
		this->id = id;
		this->name = name;
		this->score = score;
	};
	~Student2() {

	};
	void printS() {
		cout << "id =  " << id << " name  =" << name << endl;
		cout << "score = " << score << endl;
	}
private:
	string name;
	int id;
	int score;
};

//用C++的继承的方式
class Student3 : public Student
{
public:
	Student3(int id, char *name, int score) : Student(id, name)//子类继承过来的成员变量 通过父类的构造器来构造
	{
		this->score = score;
		//this->id = id;
	}

	void printS()
	{
		Student::printS();// 先调用父类中的方法
		cout << "score = " << this->score << endl;
	}
private:
	int score;//添加的一个成员变量
};

int main()
{
	// CTODO 这两种指针写法区别
	char *name = NULL;
	name = new char[64];
	//char *name = new char[64];
	strcpy(name, "zhangsan");
	Student s1(1, name);
	Student2 s2(2, "lisi", 80);

	Student3 s3(3, name, 100);
	s3.printS();

    return 0;
}

