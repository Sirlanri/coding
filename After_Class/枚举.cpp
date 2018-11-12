#include<stdio.h>

enum day {
	one = 1, two, three, fore, five
};

int main() {
	enum day day;
	int i,n;
	
	day=one;
	for (i = 0; i < 5; i++) {
		printf("%d",day);
	}
	return 0;
}

