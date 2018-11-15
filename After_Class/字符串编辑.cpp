#include <string.h>
#include<stdio.h>

int main() {
	int i;
	char a[6],b[6],c[6];
	
	printf("输入6位字母\n");
	gets_s(a);

	strcpy_s(b,a+2);	//复制后三位到b
	strcat_s(b,a-2);

	puts(b);
	return 0;
}