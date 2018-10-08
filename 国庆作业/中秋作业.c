#include<stdio.h>
#pragma warning (disable:4996)
int main()
{
	char  A;
	char Y;
	
	printf("回家否？YorN ");
	scanf("%d", &A);
	if (A==Y) {
		printf("****************\n");
		printf("*中            *\n");
		printf("*   秋         *\n");
		printf("*       快     *\n");
		printf("*           乐 *\n");
		printf("****************\n");
	           }
	else
	   {
		printf("****************\n");
		printf("*     中       *\n");
		printf("*     秋       *\n");
		printf("*     快       *\n");
		printf("*     乐       *\n");
		printf("****************\n");
	    }
		return 0;
	}