#include<stdio.h>

void shifa(int jiben, int fudong, int zhichu) {
	int s;
	s=jiben+fudong-zhichu;

	printf("%d",s);
}

struct yuangong
{
	int jiben;
	int fudong;
	int zhichu;
};

int main() {
	struct yuangong y[10];
	int n,i;

	printf("输入几个人？\n");
	scanf_s("%d",&n);

	for (i = 0; i < n; i++) {
		printf("输入基本工资\n");
		scanf_s("%d",&y[i].jiben);
		printf("浮动工资\n");
		scanf_s("%d",&y[i].fudong);
		printf("支出\n");
		scanf_s("%d",&y[i].zhichu);
		puts("统计完毕");
		shifa(y[i].jiben,y[i].fudong,y[i].zhichu);//尝试把整个数组都传入函数
	}


	return 0;
}