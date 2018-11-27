#include<stdio.h>

int main() {
	int a[40];
	int i,n,x=0,y;

	for (i = 0; i < 100; i++) {
		if (i % 3 == 0) {
			if (i <= 40) {
				printf("%d\n", i);
				x++;
			}
			else {
				y = i - 40;
				printf("%d\n", y);
				x++;
			}
		}
		if (x == 16) {
			break;
		}
	}
	return 0;
}