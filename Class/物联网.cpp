#include<stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
struct sensor
{
	int num;
	char loc;
	int temp;
};

int main() {

	struct sensor s[100];
	for (int i=0;;i++) {
		
		int rand (s[i].temp);

		s[i].num=i;
		

		if (s[i].temp > 300) {
			printf("*****\n");
		}
		else
			printf("***\n");

		_sleep(1000);

		system("CLS");
	}


}