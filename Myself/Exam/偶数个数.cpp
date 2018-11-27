#include<stdio.h>
#pragma warning (disable:4996)

int main() {
	int i, n, x, o = 0, t = 0;
	printf("输入几个数字？\n");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		if (x % 2 == 0) {
			t++;
			o = o + x;
		}
	}
	printf("偶数的个数是 %d\n", t);
	printf("和为 %d", o);

	return 0;
}