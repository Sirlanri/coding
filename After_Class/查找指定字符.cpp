#include<stdio.h> 
int main()
{
	char ch,str[80];
	int num,i,flag;
	scanf("%c\n",&ch);
	i=0;
	while((str[i]=getchar())!='\n')
	      i++;
    str[i]='\0';
    flag=0;
    for(i=0;str[i]!='\0';i++)
       if(str[i]==ch){
       	num=i;
       	flag=1;
	   }
	if(flag)
	   printf("index=%d",num);
	else
	   printf("Not Found");
	   return 0;
}
