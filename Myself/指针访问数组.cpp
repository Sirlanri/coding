#include<stdio.h>
int main(){

	int a[10][10],i,j,x=0;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			a[i][j]=x;
			x++;
		}
	}
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("%d\n",*(*(a+i)+j));
		}
	}
	return 0;
}