#include<stdio.h>

int main()
{
	int i,m=-1,n,sum=0,t;
	printf("计算多少位？\n");
	scanf_s("%d",&n);
	for (i = 1; i < n; i++)
	{
		m = -1 * m;
		t=m*1/(2*i-1);
		sum+=t;
	}
	printf("%d",sum);
	return 0;
}