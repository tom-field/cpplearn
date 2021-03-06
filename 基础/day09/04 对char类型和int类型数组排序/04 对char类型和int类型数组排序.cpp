// 04 对char类型和int类型数组排序.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#if 0
//打印
void PrintArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}
#endif // 0

template<class T>
void PrintArray(T* arr, T len) {
	for (T i = 0; i < len; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

#if 0
//排序
void MySort(int* arr, int len)
{
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			//从大到  小排列
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
#endif // 0

template<class T>
void MySort(T* arr, T len)
{
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			//从大到  小排列
			if (arr[i] < arr[j]) {
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = { 2,6,1,8,9,2 };
	//数组长度
	int len = sizeof(arr) / sizeof(int);

	PrintArray(arr, len);
	MySort(arr, len);
	PrintArray(arr, len);

	cout << "-----------------------" << endl;

	char chArr[] = { 'a','c','b','p','t' };
	len = sizeof(chArr) / sizeof(char);
	//不嫩使用 PrintArray(chArr,len) 上面函数修改成函数模板
	PrintArray<char>(chArr,len);
	MySort<char>(chArr, len);
	PrintArray<char>(chArr, len);

    return 0;
}

