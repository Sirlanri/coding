#include<stdio.h>

void paixu(int a[]) {
	int i,t,x,y;
	for (i = 0; i < 8; i++) {
		
		for (t = i+1; t < 9; t++) {
			if (a[t] < a[i]) {
				y=a[t];
				a[t]=a[i];
				a[i]=y;

			}
		}
	}
}

int main() {
	int i,t,x;
	int a[10]={5,4,9,6,4,3,1,3,7};

	paixu(a);

	for (i = 0; i < 9; i++) {
		printf("%d",a[i]);
	}
	return 0; 
}