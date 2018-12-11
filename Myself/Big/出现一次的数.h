#include<stdio.h>

void yici() {
	int a[21],i,j,f=0,l=0;
	printf("ÊäÈë20¸öÊı\n");
	for (i = 0; i < 20; i++) {
		scanf("%d",&a[i]);
	}

	for (i = 0;i<20;i++) {
		for (j = 0; j < 20; j++) {
			if (a[i] == a[j]) {
				f++;
			}
		}
		if (f == 1) {
			printf("%d\n", a[i]);
			l++;
		}
	}
	if (l == 0) {
		printf("None");
	}

}