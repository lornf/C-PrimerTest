// C++PrimerTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
		sum += i;
	cout << sum << endl;
}

