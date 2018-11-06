void delchar(char s[],char c);
int main(){
	char s[80],c;
	printf("输入");
	get(s);
	printf("输入字符");
	scanf("%c",&c)
	printf("替换的字符是");
	 delchar(s,c);
	puts(s);
	
	return 0;
} 

void delchar(char s[],char c){
	for (int i=0;s[i]!='\0';i++){
		if(s[i]==c){
			for (int j=i;s[j]!='\0';j++)
			s[j]=s[j+1];
			i--;
		}
	}
}
