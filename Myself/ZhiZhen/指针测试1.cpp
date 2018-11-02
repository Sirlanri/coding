#include<stdio.h>

int main() {
	int m=1, n = 5;
	int *p;

	p=&m;		//初始化指针

	*p=*&n;		// 这个指令真是啰嗦！

	//p=&n;
	//*p = n;		// p是地址，*p是地址的值

	printf_s("M=%d\nN=%d\np=%d\n", m, n, p);
	printf("\n");
	printf("*p=%d", *p);
	return 0;
}