// 8 多继承.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Furniture
{
public:
	Furniture()
	{
		
	};
	~Furniture()
	{
	
	};
	int m;  //材质
private:

};

class Bed : public Furniture
{
public:
	Bed()
	{
	};
	~Bed() 
	{
	};
	void sleep()
	{
		cout << "在床上睡觉" << endl;
	}
private:

};

class Sofa : public Furniture
{
public:
	Sofa()
	{
	};
	~Sofa()
	{
	};
	void sit()
	{
		cout << "在沙发上睡觉" << endl;
	}
private:

};

class SofaBed : public Bed , public Sofa
{
public:
	SofaBed()
	{

	};
	~SofaBed() 
	{
	
	};
	void sitAndSleep()
	{
		sit();//sofa
		sleep();//bed
	}
private:

};

int main()
{
	Bed b;
	b.sleep();
	cout << sizeof(b) << endl;
	cout << "-------------" << endl;
	Sofa s;
	s.sit();
	cout << "-------------" << endl;
	SofaBed sb;
	sb.sitAndSleep();
	cout << sizeof(sb) << endl;
	//sb.m = 100;
	sb.Sofa::m = 100;
	sb.Bed::m = 1000;
	cout << "-------------" << endl;
    return 0;
}

