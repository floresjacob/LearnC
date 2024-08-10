#include <stdio.h>

int main() {
	
	char myName[25];
	printf("What's your name?\n");
	
	scanf("%24s", myName); // Use %24s to avoid buffer overflow
	printf("Nice to meet you, %s!\n", myName);
	return 0;
}