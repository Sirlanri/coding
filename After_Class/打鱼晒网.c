#include<stdio.h>
#include<math.h>

#pragma warning(disable:4996)

int main() {
	int c,t;

	printf("三天打鱼两天晒网\n");
	printf("输入一个幸运数字吧！\n");
	scanf("%d", &t);
		c = t %5;
		if (c <= 3) {
			printf("大吉大利，今天打鱼！\n");
		}
		else
			printf("今儿个筛网咯~~~\n");
	return 0;
}
