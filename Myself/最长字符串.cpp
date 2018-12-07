#include<stdio.h>
#include<string.h>

int max(const char *s[], int n)
{
	int t=0,m,x;
	for (int i = 0; i < n; i++)
	{
		m=strlen(s[i]);
		if (m > t)
		{
			t=m;
			x=i;
		}
	}
	return x;
}

int main()
{
	int n,i=0;
	const char *s[20];
	int t=max(s,20);

	printf("输入多少个字符串\n");
	n=getchar();

	for (i; i < n; i++)
	{
		s[i]=getchar();
	}
	printf("%d",t+1);
	return 0;
}