#include<stdio.h>

int main(){
int m,n,i,c,d;
printf("输入多大的方阵？\n");
scanf("%d",&m);
int b[10][10];
for(i=0;i<m;i++){
	for(c=0;c<m;c++){
		printf("输入");
		scanf("%d",&b[i][c]);
		}
	}

		if(i<c&&b[i][c]==0){
			printf("YESH!!!");
		}

		
	
	

return 0;
}
