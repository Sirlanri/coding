#include<stdio.h>
int main()
{
	int num,bigchar,smallchar,i;
	char ch[80]; 
	i=0;
	while((ch[i]=getchar())!='\n')
	     i++;
	     ch[i]='\0';
	num=bigchar=smallchar=0;
	for(i=0;ch[i]!='\0';i++)
	{
	   if(ch[i]<='9'&&ch[i]>='0')
	   num++;
	   if(ch[i]<='z'&&ch[i]>='a')
	   smallchar++;
	   if(ch[i]<='Z'&&ch[i]>='A')
	   bigchar++;
    }
    printf("num=%d\nsmallchar=%d\nbigchar=%d",num,smallchar,bigchar);
    return 0;
}
