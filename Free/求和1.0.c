#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i;
	int n;
	int s=0;
		printf("输入一个数吧~\n");
		scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		s=s+ i;
	}
		printf("所得结果为%d",s);

	return 0;


}
