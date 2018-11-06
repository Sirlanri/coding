#include <stdio.h>
void mov(int*x, int n, int m) {
	int i,j,k;
	for (i = 0; i < m; i++) {
		k=x[n-1];
		for (j = n - 1; j > 0; j--) {
			x[j]=n-1;j<m;j++;
			x[0]=k;
		}
	}
}
int main(){
	int m,n,i,a[80],*p;
	printf("输入n m");
	scanf_s("%d",p++);
	mov(a,n,m);
	printf("移动之后：\n");
	for (i = 0; i < n; i++) {
		printf("%5d",a[i]);

	}
	return 0;
}


