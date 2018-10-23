#include<stdio.h>
int main(){
	int a[10];
	int b[10];
	int n,i,c,d=0,x;
		printf("你想输入多少数？\n");
			scanf("%d",&n);
	printf("输入第一个数组\n");
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
	printf("输入第二个数组\n");
	for(x=0;x<10;x++){
		scanf("%d",&c);
			for(i=0;i<n;i++){
				if (c!=a[i]){
					d=d+1;
				}
			}
			if(d=n){
				printf("不在这里面");
			}
	}
		return 0;
}
