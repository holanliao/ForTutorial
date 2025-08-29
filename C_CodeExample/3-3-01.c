#include<stdio.h>
int main(void){
	char ch = 'h';
	char str[] = "Holan";
	int i = 20240928;
	long longInt = 97;
	float singleFloat = 2.71828182845904523536028747135;
	double doubleFloat = 2.71828182845904523536028747135;

	printf("字元 %c\n", ch);
	printf("字串 %s\n", str);
	printf("整數 %d\n", i);
	printf("長整數 %ld\n", longInt);
	printf("單精度浮點數 %f\n", singleFloat);
	printf("倍精度浮點數 %lf\n", doubleFloat);
	printf("輸出 %%");

	return 0;
}

