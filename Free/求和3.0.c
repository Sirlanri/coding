#include<stdio.h>
#include<math.h>
int main() {
	float z;
	float h=0;
	int x=-1;
	int n;
	float i;
		printf_s("输入个数吧~~~\n");
		scanf_s("%d",&n);
	for (i = 1; i <n+1; i++) {
		x=-x;
		z=(x*1)/(2*i-1);
		h=h+z;
	}
	printf("结果是%f",h);
	getchar();	//这里无法暂停

	return 0;


}
