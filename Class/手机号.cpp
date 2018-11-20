#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)
#define len 13
int  verifyMsisdn(char *inMsisdn) {
	int f;
	if (len == strlen(inMsisdn)) {
		if (*inMsisdn == '8'&&*(inMsisdn + 1) == '6') {
				f=1;
			while (*inMsisdn != '\0') {
				if ((*inMsisdn >= '0') && (*inMsisdn <= '9')) {
					inMsisdn++;
				}
				else
					return 2;
			}
			if (f == 1) {
				return 0;
			}
			else
				return 3;
		}
	}
	else
		return 1;
}
int main() {
	
	char b[20];
	
	printf("ÊäÈëÊÖ»úºÅ\n");

	gets_s(b);

	printf("%d",verifyMsisdn(b));

	return 0;
}