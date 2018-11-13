#include<stdio.h>

int main(){
	int a[10]={11,22,33,44,55};
	int i;
	int *p=a;
	p=a;	//指针指向数组首位
	for(i=0;i<5;i++){
		printf("%d\n",*p);	//输出指针所指的数？
		*p++;		// ????
	}

	char *k[3]={"first","second","third"};
	printf("%s\n",k);
	printf("%s\n",*k);	//输出第一个元素
	printf("%s\n",*(k+1));		//输出下一个元素
	printf("%s\n",k[1]);		//作为数组使用

	char *s={"abcdefg"};
	
	printf("%s",s+1);
	return 0;
}

