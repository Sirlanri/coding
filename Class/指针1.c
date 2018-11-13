#include <stdio.h>

int main(){
	int a,b;
	int *x,*y;

	printf("输入数字a b \n");
	scanf("%d",&a,&b);

	*x=a;
	*y=b;

	if(*x>*y){
		*y=*x;

}
	else
		printf("比较大的是 %d\n",*y);

	return 1;
}
