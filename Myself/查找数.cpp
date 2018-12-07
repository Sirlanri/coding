#include<stdio.h>

int search(int list[], int n, int x)
{
	int i=0,f=0;
	for (i; i < n; i++)
	{
		if (list[i] == x)
		{
			f++;
			return i;
		}

	}
	if (f == n)
	{
		return -1;
	}
}

int main()
{
	int n,list[20],x,t;
	printf("你想输入多少个数？\n");
	scanf_s("%d",&n);

	for (int i = 0; i < n; i++)
	{
		printf("输入第%d个\n",i+1);
		scanf_s("%d",&list[i]);
	}

	printf("你想查询的数字是\n");
	scanf_s("%d",&x);

	t=search(list,n,x);

	if (t == -1)
	{
		printf("NOT FOUND");
	}
	else
	{
		printf("数字是第%d个",t+1);
	}
	return 0;
}