#include<stdio.h>
void bubble(int a[],int n);

int main() {
	int n,i;
	int a[10];
	printf_s("你想输入多少个数？\n");
	scanf_s("%d",&n);
	printf_s("输入这些数组吧~\n");
	for (i = 0; i < n; i++) {
		scanf_s("%d",&a[i]);
	}
	bubble(a,n);

	for (i =0 ; i <n; i++) {
		printf_s("%d " ,a[i]);
	}
	return 0;
}

void bubble(int a[], int n) {
	int i,j,t;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n-1; j++) {
			if (a[j] > a[j + 1]) {
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}