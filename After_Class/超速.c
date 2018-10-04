#include<stdio.h>
#include<math.h>

#pragma warning(disable:4996)

int main() {
	float c, x;
	printf("分别输入车速和限速，用空格分开\n");
	scanf("%f%f", &c, &x);
	
		
	if (c < 1.1*x) {
		printf("恭喜 你没事了~");
	}
	else
		if (c < 1.5*x) {
			printf("赶紧交200块！\n");
		}
		else
			printf("上午油门一脚踩，下午驾校笑开颜\n");
	return 0;
}