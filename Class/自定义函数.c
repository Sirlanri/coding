#include<stdio.h>
double fact(int n){
	int i;
	double r=0;
	for(i=1;i<=n;i++){
		r=r+i;
	}
	return r;
}
int main(){
	int i;
	double n=0;
	for(i=1;i<=10;i++){
		n=n+fact(i);
	}
	printf("resulr=%f\n",n);
return 0;
}
