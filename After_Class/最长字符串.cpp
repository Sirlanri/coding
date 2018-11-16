#include<stdio.h>
#include<string.h>

int main() {
	int i,b[20],max=0;
	char *a=NULL;
	puts("ÊäÈë5¸ö×Ö·û\n");

	for (i = 0; i < 5;i++) {
		scanf_s("%s",a);
		b[i]=strlen(a);
	}

	for (i = 0; i < 4; i++) {
		if (b[i] >max) {
			max=a[i];
		}
	}
	printf("%d",max);

	return 0;
}