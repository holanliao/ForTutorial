#include<stdio.h>
int main(void){
	char a = 'h';
	char b[] = "Holan";
	int c = 20240928;
	long d = 97;
	float e = 2.71828182845904523536028747135;
	double f = 2.71828182845904523536028747135;

	printf("印出字元 %c\n", a);
	printf("印出字串 %s\n", b);
	printf("印出整數 %d\n", c);
	printf("印出長整數 %ld\n", d);
	printf("印出單精度浮點數 %f\n", e);
	printf("印出倍精度浮點數 %lf\n", f);
	printf("印出 %%");

	return 0;
}
