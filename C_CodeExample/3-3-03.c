#include<stdio.h>

int main(){
	char upperCase;
	printf("請輸入大寫字母(A-Z):");
	scanf("%c", & upperCase);
	char lowerCase = upperCase + 32;
	printf("轉換小寫字母為:%c", lowerCase);
	return 0;
}
