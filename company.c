#include <stdio.h>



int main() {
	
	enum Company {GOOGLE, FACEBOOK, XEROX, EBAY};
	
	enum Company co_1 = GOOGLE;
	enum Company co_2 = FACEBOOK;
	enum Company co_3 = XEROX;
	
	printf("company 1: %d\n", co_1); //prints 0
	printf("company 2: %d\n", co_2); //prints 1
	printf("company 3: %d\n", co_3); //prints 2
	
	return 0;
}