#include<stdio.h>
int main(void){
	char ch;
	long longInt;
	scanf("%c", & ch);
	fflush(stdin);
	scanf("%d", & longInt);

	printf("字元 %c\n", ch);
	printf("長整數 %d\n", longInt);

	return 0;
}
