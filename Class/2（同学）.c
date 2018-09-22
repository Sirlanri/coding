#include<stdio.h>

int main()

{   char zm;

    int i;

    for(i=0;i<10;i=i+1)

   { printf("你要打大写还是小写字母");

    scanf("%c",&zm);

    if(zm>=65&&zm<=90)

    printf("是大写啊");

    else

    printf("是小写");}

}
