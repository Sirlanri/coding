#include<stdio.h>
#pragma warning(disable:4996)
struct fruit
{
	char name[20];
	int price;
};

int main() {
	struct fruit f[10];
	int i,t,max=0,min=10,maxi,mini;
	printf("输入水果的名字和单价\n");

	for (i = 0; i < 3; i++) {
		printf("第%d水果的名字\n",i+1);
		scanf("%s",&f[i].name);
		printf("第%d水果的价格\n",i+1);
		scanf("%d",&f[i].price);
	}

	for (i = 0; i <3; i++) 
	{
		if (f[i].price > max) {
			max=f[i].price;
			maxi=i;
		}
		if (f[i].price < min) {
			min=f[i].price;
			mini=i;
		}
	}

	printf("最高是%s",f[maxi].name);
	printf("最低是%s",f[mini].name);

	return 0;
}