#include <stdio.h>
#include <string.h>
bool huiwen(char *c){
	int len=strlen(c);
	int left=0,right=len-1;
	while(left<=right){
		if(c[left]==c[right]){
			left++;
			right--;
			
		}
		else
			break;
			
	}
	if(left>right)
	return ture;
	else 
	break;
}

int main(){
	char c[100];
	printf("输入字符串");
	scanf("%s",c);
	
	if(huiwen(c))
		printf("是\n");
	else 
		printf("不是\n");
	return 0; 
}
