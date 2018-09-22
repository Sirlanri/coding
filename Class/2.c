#include<stdio.h>
#pragma warning (disable:4996)
int main(void)

{

	char zm;
	int i;
	printf("输入一个字母吧~" );
	scanf("%c", &zm);
	if (zm >= 65 && zm < 90)
		printf("这是大写" );
	else
		if (zm >= 96 && zm < 123)
			printf("这是小写");
		else
			printf("这是啥？？");


}
