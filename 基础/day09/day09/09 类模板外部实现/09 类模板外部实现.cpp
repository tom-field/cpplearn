// 09 类模板外部实现.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//虽然可以在定义上加template<class T>可以在windows上编译通过,但是不建议
//类外实现最终方案 模板类前面定义:
template<class T> class Person;
template<class T> void PrintPerson(Person<T>& p);


template<class T>
class Person {
public:
	Person(T age, T id);
	void Show();
	//重载左移操作符
	//template<class T>
	//friend ostream& operator<<(ostream& os, Person<T>& p);

	friend ostream& operator<<(ostream& os, Person<T>& p);
	//普通打印
	//template<class T>
	//friend void PrintPerson(Person<T>& p);

	friend void PrintPerson<T>(Person<T>& p);
private:
	T mAge;
	T mID;
};

template<class T>   //注意这里要有这句话
//Person::Person<T>(T age, T id) {
Person<T>::Person(T age, T id) {
	this->mID = id;
	this->mAge = age;
}

template<class T>
//Person::Show()<T>{
void Person<T>::Show(){
	cout << "Age:" << this->mAge << "ID：" << this->mID << endl;
}

//重载左移运算操作符
//无法解析的外部命令 是因为友元函数找不到实现, 下面的实现是个模板
//最后在定义上面加上template<class T> 可以正常执行
//但是在linux上不能正常执行
//friend ostream& operator<<(ostream& os, Person<T>& p); 
template<class T>
ostream& operator<<(ostream& os, Person<T>& p)
{
	os << "Age:" << p.mAge << " ID:" << p.mID << endl;
	return os;
}

//普通打印函数
template<class T>
void PrintPerson(Person<T>& p)
{
	cout << "Age:" << p.mAge << " ID:" << p.mID << endl;
}
int main()
{
	Person<int> p(10, 20);
	//p.Show();
	//cout << p;
	PrintPerson(p);
    return 0;
}

