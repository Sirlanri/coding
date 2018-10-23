#include<stdio.h>
#pragma warning (disable:4996)
int main() {
		int n, i, c = 0, d = 0, x;
		int a[10];
		int b[10];
	printf("你想输入多少数？\n");
		scanf("%d", &n);
	printf("输入第一个数组\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("输入第二个数组\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	}
	for (i = 0; i < n; i++) {
		for (x = 0; x < n; x++) {
			if (a[x] == b[i])
			b[i] = 0;
		}
	}
	for (i = 0; i < n; i++) {
		if(b[i]!=0)
		printf("%d",b[i]);
	}
	return 0;
}
