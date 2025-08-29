#include<stdio.h>
int main(){
	int product = 0;
	int i;
	for(i = 1; i <= 10; i++){
		printf("product * i = %d", product);
		product = product + i;
		printf(" * %d = %d\n", i, product);
	}
	printf("product = %d\n", product);
	return 0;
}
