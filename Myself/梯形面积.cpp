#include<stdio.h>

int func(int a, int b, int h)
{
	return (a+b)*h/2;
}

int main()
{
	int a,b,c;
	printf("输入上底 下底 高\n");
	scanf_s("%d%d%d",&a,&b,&c);
	printf("面积是%d",func(a,b,c));
	return 0;
}