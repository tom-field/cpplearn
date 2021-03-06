// day08.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;
//抽象
class Shape
{
public:
	Shape() {};
	virtual ~Shape()
	{
		cout << "~Shape()..." << endl;
	};
	virtual void show() = 0;
	virtual void getArea() = 0;
private:

};

class Circle:public Shape
{
public:
	Circle(double r)
	{
		this->r = r;
	};
	~Circle() 
	{
		cout << "~Circle()..." << endl;
	};
	virtual void show()
	{
		cout << "圆的半径是" << r << endl;
	}
	virtual void getArea()
	{
		cout << "圆的面积是" << 3.14*r*r << endl;
	}
private:
	double r;
};

class Square : public Shape
{
public:
	Square(double a)
	{
		this->a = a;
	}
	~Square() 
	{
		cout << "~Square()..." << endl;
	};
	virtual void show()
	{
		cout << "正方形的边长是" << a << endl;
	}
	virtual void getArea()
	{
		cout << "正方形的面积是" << a * a << endl;
	}
private:
	double a;
};

int main()
{
	Shape *array[2];
	for (int i = 0; i < 2; i++)
	{
		if (i == 0) {
			double r;
			cout << "请输入圆的面积" << endl;
			cin >> r;
			array[i] = new Circle(r);
		}
		else if (i == 1)
		{
			double a;
			cout << "请输入正方形边长" << endl;
			cin >> a;
			array[i] = new Square(a);
		}
	}
	for (int i = 0; i < 2; i++)
	{
		array[i]->show();
		array[i]->getArea();
		delete array[i];
	}
    return 0;
}

