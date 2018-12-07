#include <stdio.h>

int main()
{
	int a[10];
	int i,t,ave;
	for (i = 0; i < 10; i++)
	{
		printf("ÊäÈëµÚ%d¸ö",i+1);
		scanf_s("%d",&a[i]);
		t+=a[i];
	}
	ave=t/10;
	for (i = 0; i < 10; i++)
	{
		if (a[i] > ave)
		{
			printf("%d",a[i]);
		}
	}
	return 0;
}