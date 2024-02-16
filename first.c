#include <stdio.h>

// Beginner C stuffs
// Written by Dusk
// MIT License. <https://opensource.org/license/MIT/>

int num1 = 15;
int num2 = 25;
char letter1 = 'A';
char letter2 = 'C';

int main() {
	printf("Hello World\n"); // Hello world with a new line
	printf("Variable 'num1' is: '%d'\n", num1);
	num1 = 20;
	printf("Variable 'letter1' is: '%c'\n", letter1);
	letter1 = 'B';
	printf("I changed 'num1' to be '%d'\n", num1);
	printf("I also changed 'letter1' to be '%c'\n", letter1);
	printf("'letter2' is '%c', and 'num2' is '%d'\n", letter2,num2);
	int num3 = num1 + num2;
	printf("%d + %d = %d\n",num1,num2,num3);
	letter1 = letter2;
	printf("Now 'letter2' is '%c' instead of B.\n",letter1);
	return 0;
}

/* Multiline
 * garbage */

