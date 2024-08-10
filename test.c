#include <stdio.h>

enum Weekday { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
	
	char myName[25];
	enum Weekday today;
	int day;
	
	
	//io example
	printf("What's your name?\n");
	scanf("%24s", myName); // Use %24s to avoid buffer overflow
	printf("Nice to meet you, %s!\n", myName);
	
	//enum example
	while(1) { // Infinite loop to keep asking for input until a valid value is entered
		printf("What day of the week is it?\n");
		printf("0: Sunday\n");
		printf("1: Monday\n");
		printf("2: Tuesday\n");
		printf("3: Wednesday\n");
		printf("4: Thursday\n");
		printf("5: Friday\n");
		printf("6: Saturday\n");
		printf("Enter the number corresponding to the day: ");
		scanf("%d", &day);
		
		if (day >= 0 && day <= 6) {
			today = (enum Weekday)day;
			break;
		} else {
			printf("Invalid input. Please enter a number between 0 and 6.\n");
		}
	}
	
	
	today = (enum Weekday)day;

    switch (today) {
        case Sunday:
            printf("You selected Sunday.\n");
            break;
        case Monday:
            printf("You selected Monday.\n");
            break;
        case Tuesday:
            printf("You selected Tuesday.\n");
            break;
        case Wednesday:
            printf("You selected Wednesday.\n");
            break;
        case Thursday:
            printf("You selected Thursday.\n");
            break;
        case Friday:
            printf("You selected Friday.\n");
            break;
        case Saturday:
            printf("You selected Saturday.\n");
            break;
    }
	
	
	return 0;
}