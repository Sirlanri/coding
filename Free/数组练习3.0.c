#include<stdio.h>
int main() {
	int n[3];
	int i;
	int z;
	int t=1;
	printf_s("开始输入这些数组吧\n");
	for (i = 0; i < 3; i++) {
		scanf_s("%d",&n[i]);
		}
	for (i = 0; i < 4; i++) {
		if (n[i] > n[i + 1]) {
			z = n[i];
			n[i + 1] = n[i];
			t = t + 1;
		}
	}
	printf_s("%d",n[3]);
	
return 0;
}
