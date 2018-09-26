#include<stdio.h>
#pragam warning(disable:4996)

int main()
{
int i,n;
double sum=0;

 printf("输入一个数字吧"/n);
 scanf("%d",&n);
 
 for(i=1;i<n+1,i++)
  {
  sum=sum+1.0/i;
 
  }
 printf("%f",sum);
}
