#include<stdio.h>
int main()
{
	int n,i,j,b,c,max,d;
	int a[10][10];
	printf(" ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	   for(j=0;j<n;j++)
	      scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    {
    	d=1;
    	max=a[i][0];
    	b=i;
    	c=0;
    	for(j=0;j<n;j++)
    	{
    		if(a[i][j]>max)
    		{
    		  max=a[i][j];
    		  b=i;
    		  c=j;
			}
		}
	for(j=0;j<n;j++)
	{
		if(max>a[j][c])
		{
			d=0;
			break;
		}
	}
	if(d==1)
	{
		printf("a[%d][%d]=%d",b,c,a[b][c]);
		break;
	}
	else if(d==0&&i==n-1)
	{
		printf("no");
	}
	}
	return 0;
	      
}
