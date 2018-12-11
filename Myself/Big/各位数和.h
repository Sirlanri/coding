#include<stdio.h>

void shuhe() {
	int x=1,n,y,i,sum=0,m;
	printf("输入一个整数\n");
	scanf_s("%d",&n);
	m=n;
	for (; n >= 10; ) {
		x++;
		n=n/10;
	}
	for (; m >= 1; m = m / 10) {
		y=m%10;
		sum=y+sum;
		
	}
	printf("数位是%d\n",x);
	printf("位数之和为%d\n",sum);
}