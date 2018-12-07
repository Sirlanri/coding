#include<stdio.h>

int main()
{
    int n,m,i,x,y;

    pus("输入m n");
    scanf("%d",&m);
    scanf("%d",&n);

    if(m>n){
        x=m;
        y=n
    }
    else
        x=n;
        y=m;    //x是最大的
    for(i=x;i>1;i--){
        if(m%i==0&&n%i==0){
            printf("最大公约数是%d\n",i);
        }
    }

    for(i=y;i<30000;i++){
        if(i%m==0&&i%n==0){
            printf("最小公倍数是%d\n",i);
            
        }
    }
    return 0;
}
