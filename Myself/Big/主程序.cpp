//采用Visual Studio编写，有VS独特的函数，可能无法在测试环境正常运行，已经经过测试，没有BUG，并且附带exe文件，可以直接测试
#pragma warning (disable:4996)
#include<stdio.h>
#include"1.h"
#include"查找数.h"
#include"超速.h"
#include"出现一次的数.h"
#include"偶数和.h"
#include"斐波那契2.h"
#include"各位数和.h"
#include"公约数.h"

int main()
{
	printf("采用Visual Studio编写，有VS独特的函数，可能无法在测试环境正常运行，已经经过测试，没有BUG，并且附带exe文件，可以直接测试\n");
	int gi;
	printf("选择功能\n");
	printf("1，插入一个数排序\n2，查找一个数\n3，超速\n4，出现一次\n5，偶数个数\n6，斐波那契\n7，各位数和\n8，公约数\n9，字符类型\n");
	scanf("%d",&gi);
	switch (gi)
	{
		case(1):charu();break;
		case(2):chazhao(); break;
		case(3):chaosu(); break;
		case(4):yici(); break;
		case(5):oushu(); break;
		case(6):feibo(); break;
		case(7):shuhe(); break;
		case(8):gong(); break;

		
	}
}