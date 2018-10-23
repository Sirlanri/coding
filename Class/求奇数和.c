#include<stdio.h>
int main(){
	int a,b,c=0;
	printf("Enter a number\n");
	for(b=0;b<100;b++){
		scanf("%d",&a);
		if(a>0){
			if(a%2!=0){
				c=c+a;
			}
		}
			else
				break;
	}
	printf("%d",c);
return 0;
}
