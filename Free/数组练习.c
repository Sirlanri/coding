#include<stdio.h>
int main() {
	int n[10];
	int i,x;
	printf_s("输入一个整数\n");
	scanf_s("%d",&x);
	printf_s("开始输入这些数组吧\n");
	for (i = 0; i < x; i++) {
		scanf_s("%d",&x[i]);
		}
	for(i=0;i<x;i++)
		printf_s("%d",x[n]);

return 0;
}
