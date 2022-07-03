#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main (void)
{

	float value1, value2;
	char operator;

	operator = '+';

	printf ("Type in your first number. \n");
	scanf ("%f", &value1);
	printf ("Type in your second number and operator. \n");
	scanf (" %c %f", &operator, &value2);
	

	if ( operator == '+' )
		printf ("%.6f\n", value1 + value2);
	else if ( operator == '-' )
		printf ("%.6f\n", value1 - value2);
	else if ( operator == '*' || operator == 'x')
		printf ("%.6f\n", value1 * value2);
	else if ( operator == '/' )
		if ( value2 == 0 )
			printf ("Division by zero.\n");
		else
			printf ("%.6f\n", value1 / value2);
	else
		printf ("Unknown operator.\n");
//Generate prime number.
/*	int p, d, number;
	bool isPrime;

	printf ("Type your final number to generate prime table: ");
	scanf ("%i", &number);

	for ( p = 2; p <= number; p++ ) {
		isPrime = true;

		for ( d = 2; d < p; d++ )
			if ( p % d == 0 )
				isPrime = false;

		if ( isPrime != false )
			printf ("%i ", p);
	}

	
	printf ("\n");
*/
/*	int numberToTest, remainder;

	printf ("Enter your number to be tested.: ");
	scanf ("%i", &numberToTest);

	remainder = numberToTest % 2;

	if ( remainder == 0 )
		printf ("The number is even.\n");
	else
		printf ("The number is odd.\n");
*/
//Calculate the absolute value
/*	int number;

	printf ("Type in your number: ");
	scanf ("%i", &number);

	if ( number < 0)
		number = -number;

	printf ("The absolute value is %i\n", number);
*/
//Calcutete average grades
/*	int numberOfGrades, i, grade;
	int gradeTotal = 0;
	int failureCount = 0;
	float average;

	printf ("How many grades will you be entering? ");
	scanf ("%i", &numberOfGrades);

	for ( i = 1; i <= numberOfGrades; i++) {
	printf ("Enter grade #%i: ", i);
	scanf ("%i", &grade);

	gradeTotal += grade;
	if ( grade < 65 )
		++failureCount;
	}

	average = (float) gradeTotal / numberOfGrades;

	printf ("\nGrade average = %.2f\n", average);
	printf ("Number of  failures = %i\n", failureCount);
*/
	return 0;
}
