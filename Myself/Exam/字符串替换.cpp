#include<stdio.h>

void mchars(char s[], char c) {
	for (int i = 0; i < 80; i++) {
		if (s[i] == c) {
			s[i]='*';
		}
		if (s[i] == '\0') {
			break;
		}
	}
	puts(s);
}
int main() {
	char s[80],c;

	printf("ÊäÈë×Ö·û´®\n");
	gets_s(s);

	printf("È¥µôµÄ×Ö·ûÊÇ\n");
	c=getchar();

	mchars(s,c);

	return 0;
}