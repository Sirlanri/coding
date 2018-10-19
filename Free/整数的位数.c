#include<stdio.h>
int main() {
	int x,i,a;
	int c=1;
	printf_s("输入一个数\n");
		scanf_s("%d",&x);
		for (i = 0; i < 10; i++) {
			a=x/10;
			c=c++;
				if (a <= 10) 
					break ;			
				
		}
	printf_s("这是个%d位数",c);
return 0;
}
