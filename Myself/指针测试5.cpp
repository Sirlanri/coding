#include<stdio.h>
#include<stdlib.h>

int fun1() {
	printf("这是fun1\n");
	return 1;
}

void fun2(int k, char c) {
	printf("这是fun2\n");
}

int main() {
	
	int (*p1)()=NULL;
	void (*p2)(int, char) =0;

	int a,b;

	p1=&fun1;
	p2=&fun2;

	a=p1();
	b=(*p2)();


}