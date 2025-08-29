#include<stdio.h>
int main(void){
	char ch;
	long longInt;
	scanf("%c", & ch);
	fflush(stdin);
	scanf("%d", & longInt);

	printf("字元為 %c\n", ch);
	printf("常整數為 %ld\n", longInt);

	return 0;
}

