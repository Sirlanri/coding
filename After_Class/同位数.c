#include<stdio.h>
#pragma warning (disable:4996)
void han(int i, int b) {
	int x;
	while (i <= b)
	{
		if (i < 10) {
			x = i * i;
			if (i == x % 10)
				printf("%d\n", i);

		}
		else {
			x = (i*i) % 100;
			if (i == x) {
				printf("%d\n", i);
			}
		}
		i++;
	}
}
int main()
{
	int a, b, i, x;

	//printf("ÊäÈë·¶Î§ÊÇ£¿\n");
	scanf("%d%d", &i, &b);

	han(i, b);

	return 0;
}