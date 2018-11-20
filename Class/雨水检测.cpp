#include<stdio.h>
#pragma warning (disable:4996)
struct rain
{
	int num;
	int loc;
	int l[12];
};
int main() {
	struct rain r[5];
	int a[5],i,n,t=0,j;
	for (int j = 0; j < 5; j++) {
		printf("第%d月\n",j+1);

		for (i = 0; i < 12; i++) {
			printf("输入%d月\n", i);
			scanf("%d", &r[i].l);
		}
	}
	
	//开始比较大小
	int max;
	for (i = 0; i < 12; i++) {
		for (j = 0; j < 11; j++) {
			printf("%d地点 %d月 降雨量%d\n",i+1,j+1, r[i].l[j]);
			if (r[i].l[j]> max) {
				max= r[i].l[j];
			}
		}
	}
	printf("最大的降雨量是%d",max);

	return 0;
}