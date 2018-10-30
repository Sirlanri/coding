#include<stdio.h>
#include <string.h> 

int main(){

char b,*c;
int i;
char *a="make,usa,great,again";

printf("开始敲个字母吧，特朗普就职前说过的\n");
scanf("%c",&b);

c=strchr(a,'b');
if(c!=NULL){
	printf("%c",c);
}
return 0;
}
