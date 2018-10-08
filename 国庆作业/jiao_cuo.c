#include<stdio.h>
#include<math.h>

#pragma warning(disable:4996)

int main() {
	double a, b, c,d,e,n;
	int i;
	double s = 0;
	printf("输入一个数\n");
	scanf("%lg", &n);

	for (i = 1; i <=n; i++) { //i=0
		d=pow(-1, i+1);
		c = d*(i) / (2*i-1);
		s = s + c;
		

	}
	
	printf("%.3lf\n", s);
	return 0;
}