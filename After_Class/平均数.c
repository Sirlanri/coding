#include<stdio.h>
#pragma warning (disbale:4996)

int main() {
	int a, b, c, d, e;
	int j;
	printf("输入5个数吧，用空格分开\n");
	scanf_s("%d %d %d %d %d",&a,&b,&c,&d,&e);

		j = (a + b + c + d + e) / 5;

	printf("平均数是%d",j);
	return 0;

}
