#include<stdio.h>

int main() {
	int i,flag=0,x;
	int a[5];

	printf("输入5个数\n");
	for (i = 0; i < 5; i++) {
		scanf_s("%d",&a[i]);
	}
	printf_s("输入你想查找的值\n");
	scanf_s("%d",&x);
	for (i = 0; i < 5; i++) {
		if (x == a[i]) {
			printf_s("下标是%d",i);
			flag=1;
			break;
		}

	}
	if (flag != 1) {
		printf_s("不存在于当前数列\n");
	}
}
