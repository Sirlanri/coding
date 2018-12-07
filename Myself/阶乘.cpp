#include<stdio.h>

double fact(int n)
{
	double sum=1;
	for (int i =1 ; i <= n; i++)
	{
		sum=sum*i;
	}
	return sum;
}

int main()
{
	int n;

	printf("计算到几？\n");
	scanf_s("%d",&n);
	printf("结果是%lf",fact(n));

	return 0;
}