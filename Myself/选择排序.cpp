#include <stdio.h>

int main()
{
	int n,i,j,t,a[20];
	printf("你想输入多少个？\n");
	scanf_s("%d",&n);

	for (i = 0; i < n; i++)
	{
		printf("输入第%d个\n",i+1);
		scanf_s("%d",&a[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (a[j] < a[i])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}