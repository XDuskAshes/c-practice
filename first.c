#include <stdio.h>

// Beginner C stuffs
// Written by Dusk
// MIT License. <https://opensource.org/license/MIT/>

int num1 = 15;
int num2 = 25;
char letter1 = 'A';
char letter2 = 'C';

/*
 * Note to self on how to display different data types
 * %d for ints
 * %f for floats
 * %c for characters
 * %s for strings
*/

int main() {
	printf("Hello World\n"); // Hello world with a new line
	printf("Variable 'num1' is: '%d'\n", num1);

	num1 = 20; // changes num1 to 20 as the value.

	printf("Variable 'letter1' is: '%c'\n", letter1);
	letter1 = 'B'; // makes the letter be B now

	printf("I changed 'num1' to be '%d'\n", num1);
	printf("I also changed 'letter1' to be '%c'\n", letter1);
	printf("'letter2' is '%c', and 'num2' is '%d'\n", letter2,num2);
	int num3 = num1 + num2;
	printf("%d + %d = %d\n",num1,num2,num3);
	letter1 = letter2;
	printf("Now 'letter2' is '%c' instead of B.\n",letter1);

	// multiple vars, hm
	
	int foo = 50, bar = 30, baz = 10;
	printf("%d\n", foo + bar - baz);

	// now many of the same type, funky
	
	int oof, rab, zab; // damn you, semicolons.
	oof = rab = zab = 50;
	printf("%d\n",oof + rab - zab);

	// floats, spooky
	
	float floatNum1 = 99.99;
	printf("Floating number is %f\n", floatNum1);
	return 0;
}

/* Multiline
 * garbage */

