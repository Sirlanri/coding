#include<stdio.h>
#include <string.h> 

int main(){
	char str[80],ch;
	int i,flag,j;
	printf("输入");
	scanf("%c",&ch);

	getchar();
	while((str[i]=getchar())!='\n')
		i++;
	str[i]='\0';
	for(i=0;i<80;i++){
		if(ch==str[i])
			j=i;
		flag=1;
	}
	if (flag=1)
		printf("%d",j);
	else
		printf("not found");

	return 0;
}
