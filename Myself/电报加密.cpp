#include<stdio.h>
#include<string.h>

#define maxline 100		//防止gets的数据过长

void del(char a[],char x);
void pass() {
	char line[maxline];
	int n;
	char *s = { 0 };
	printf("输入字符串吧\n");
	scanf_s("%s",s);
	//gets_s(line);

	printf("加密多少位？\n");
	scanf_s("%d", &n);

	for (; *s != '\0' ; s++) {		// \0是终止字符的意思，一串字符的结尾就是这个
		if (*s == 'z')
			*s = 'a';
		else
			*s = *s + n;
	}
	printf("信息已加密\n");
	printf("%s", line);
}

void del (char *a, char x) {
	printf("输入字符串吧\n");
	

	while (*a==x)
	{
		*a='\0';
	}
}
int main() {
	int n,b;

	printf("你想删字还是加密？\n1.删字\n2.加密\n3.找女朋友");
	scanf_s("%d",&b);
	switch (b)
	{
		case 1:del;
		case 2:pass;
			break;
	}

	getchar();

	return 0;
}