// Q.3) Digit Addition
// Develop a Program to find the sum of a number's first and last digits.

#include <stdio.h>

void main()
{
	int num, lastDigit, firstDigit, sum;
	printf("Enter any number:");
	scanf("%d", &num);

	lastDigit = num % 10;

	while (num >= 10)
	{
		num = num / 10;
	}
	firstDigit = num;
	sum = firstDigit + lastDigit;
	printf("The sum of the first and the last digit: %d" , sum);
}
