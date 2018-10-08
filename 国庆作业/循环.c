#include<stdio.h>
int main(void)
{
	
    int X;
	int Y;
	int i;
	printf(" ‰»ÎX\n");
	for(i=1;i<=10;i++)
	{
	scanf("%d",&X);
	
	Y=X*X;
	printf("%d=%d*%d\n",Y,X,X);
	printf("%d*%d=%d\n",X,X,Y);
	}
return 0;
}