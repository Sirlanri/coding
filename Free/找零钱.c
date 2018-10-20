#include<stdio.h>
int main() {
	int y,e,w,x,i,t,a,b,c;
	int m=0;
	t=0;
		printf_s("输入你的金额\n");
			scanf_s("%d",&x);
			for (a=0;a<20;a++) {
				w=a;
				for (b = 0; b < 100; b++) {
					e=b;
					
					for (c = 0; c < 200; c++) {
						c=x-5*w-2*e;
						y=c;
							printf_s("五分的%d\n二分的%d\n一分的%d\n", w, e, y);
							printf_s("-------------------\n");
						if (y >= 0) {
							t = t + 1;
							
						}
						else 
						break;
						
								
					}

				}
					
			
			

			}
		printf_s("方案总数有%d种",t);

return 0;
}
