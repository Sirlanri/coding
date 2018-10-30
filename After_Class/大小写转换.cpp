#include <stdio.h>
int main()
{
    char str[100],ch;
    int i=0;
    while((ch=getchar())!='#')
    {
        if(ch<='z'&&ch>='a')
            ch=ch-32;
        else
            if(ch>='A'&&ch<='Z')
                ch=ch+32;
        str[i++]=ch;
    }
    printf("%s\n",str);
    
    return 0;
}

