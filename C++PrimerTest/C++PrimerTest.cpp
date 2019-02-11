// C++PrimerTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	cin >> a >> b;
	printf("The number between %d and %d are listed:\n", a, b);
	
	int i = a;
	while (i <= b)
		printf("%d\n", i++);


	
}

