#include<stdio.h>

int main() {
	int n,a[20],i,sum=0;
	double ave;
	printf("输入多少数？\n");
	scanf_s("%d",&n);

	for (i = 0; i < n; i++) {
		scanf_s("%d",&a[i]);
	}

	for (i = 0; i < n; i++) {
		sum+=a[i];
	}

	ave=sum/n;

	printf("和为%d",sum);
	printf("平均数为%.1f",ave);

	return 0;
}