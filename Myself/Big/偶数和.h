#include<stdio.h>


void oushu() {
	int i,n,x,o=0,t=0;
	printf("输入几个数字？\n");
	scanf("%d",&n);


	for (i = 0; i < n; i++) {
		printf("输入第%d个\n",i+1);
		scanf("%d",&x);
		if (x % 2 == 0) {
			t++;
			o=o+x;
		}
	}
	printf("偶数的个数是 %d\n",t);
	printf("和为 %d",o);
}