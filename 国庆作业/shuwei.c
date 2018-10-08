#include<stdio.h>
#pragma warning (disable:4996)

int main() {
	int G, S, B, X;
	printf("输入个三位数吧~");
	scanf("%d", &X);
	G = X % 10;
	S = (X / 10) % 10;
	B = X / 100;

	printf("个位%d，十位%d，百位%d", G, S, B);

	return 0;
}