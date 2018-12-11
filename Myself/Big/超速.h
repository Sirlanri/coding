#include<stdio.h>
#include<stdlib.h>

void chaosu() {
	float c, x, y;
	printf("分别输入车速和限速，用空格分开\n");
	scanf("%f%f", &c, &x);
	y = (c - x) * 100 / c;

	if (c < 1.1*x) {
		printf("恭喜 你没事了~");
	}
	else
		if (c < 1.5*x) {
			printf("你超速了%.2d%%\n", y);
			printf("赶紧交200块！\n");
		}
		else
			printf("你超速了%.2f%%", y);
	printf("上午油门一脚踩，下午驾校笑开颜\n");



	system("pause");



}