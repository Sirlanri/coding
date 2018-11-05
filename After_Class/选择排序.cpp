#include<stdio.h>

void han(int n,int a[]) {
	int i,t,z;

	for (i = 0; i < n; i++) {
		for (t = 0; t < n; t++) {
			if (a[i] < a[t]) {
				z=a[i];
				a[i]=a[t];
				a[t]=z;
			}
		}
	}

}

int main(){
	int n,i,b[20],c,a[20];
	printf("你想输入多少数？\n");
	scanf_s("%d",&n);

	printf("输入数组吧~\n");
	for (i = 0; i < n; i++) {
		scanf_s("%d",&a[i]);
	}

	han(n,a);
	
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0; 
}