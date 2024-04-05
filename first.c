#include <stdio.h>
#include <stdbool.h> // Booleans. True/False stuff.

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
 * 	putting a '%.#f' restricts how many decimals can be printf()'d
 * %c for characters
 * %s for strings
 * %lu for long unsigned ints, like sizeof()'s
 *
 * Additional note to self on data types:
 *
 * chars store ONE character
 * numbers:
 * 	ints for normal
 * 	floats for decimals
 *
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

	// type conversion
	
	int someNum1 = 5;
	int someNum2 = 2;
	int someNumSum = someNum1 / someNum2;

	printf("%d\n", someNumSum); // Outputs 2. Don't want that.
	
	// implicitly converting
	
	float someFloatNum = 9;

	printf("%f\n", someFloatNum); // outputs 9.000000 as it should.
	
	/*
	 * something like
	 * 
	 *  int someInt = 9.99;
	 *
	 * won't return a float since it just reads as an int, not float.
	 *
	 * Instead we can:
	*/

	// explicitly converting
	
	float someFloatSum = (float) someNum1 / someNum2; // the '(float)' makes it so
							  // the compiler takes the
							  // values given and makes
							  // them floats for the
							  // equation. very useful.

	printf("%f\n", someFloatSum); // Outputs 2.5, as it should.
	
	/*
	 * I'm not going to do this actively, since frankly
	 * I feel like it's more situational, I'm making notes on constants.
	 *
	 * 'const' makes a variable constant, as in read-only, and can't be changed.
	 * It also has to be assigned with a value, or else you can't assign one.
	*/

	/*
	 * Unrelated, operators: 
	 * 
	 * addition (+), subtraction (-),
	 * multiplication (*), and division (/)
	 * are all present
	 *
	 * Modulus (%) returns a division remainder.
	 *
	 * Increment (++) and Decrement (--) increase and decrease
	 * a value by one respectively
	 *
	 * Comparison operators:
	 *
	 * equal to (==), not equal (!=), greater than/less than (>/<)m,
	 * then the equal to's of the before mentioned. (>=/<=)
	 *
	*/

  // booleans!
  // can be true or false, 1 or 0, yes or no [...] you see where this is going
  
  bool thisIsFunToLearn = true; // if only there was an equivalent to just going 'eh.'
  bool iLoveTmuxSoMuch = false; // it hurts my hands sometimes

  printf("%d\n", thisIsFunToLearn);
  printf("%d\n", iLoveTmuxSoMuch);


  // conditionals time :]

	return 0;
}

/*
 * Multiline comments
 * are cool in my opinion
*/
