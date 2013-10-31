#include <stdio.h>

char line[100];
int  result;
char operator;
int  value;

int main() {
	result = 0;
	while(1) {
		printf("Result: %d\n", result);
		printf("Enter operator and number: ");

		fgets(line, sizeof(line), stdin);
		sscanf(line, "%c %d", &operator, &value);

		if((operator =='q') || (operator == 'Q')) {
			break;
		}
		switch(operator) {
			case '+':
				result += value;
				break;
			case '-':
				result -= value;
				break;
			case '*':
				result *= value;
				break;
			case '/':
				if(value == 0) {
					printf("Error:Divide by zero\n");
					printf("   operation ignored\n");
				} else {
					result /= value;
				}
				break;
			default:
				printf("Unknown operator %c\n", operator);
				break;
		}
	}
	return(0);
}
