#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int a;
	int s;
	
	printf("输入一个数吧~\n");
	scanf("%d", &a);
	s = (1 + a)*a / 2;

	printf("结果为%d", s);
	return 0;
}
