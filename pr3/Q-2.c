// Q.2) Digit Counter
// Jevelop a Program to count the total number of digits in a number.

#include <stdio.h>

void main()
{
	int n, count = 0;
	printf("Enter any number: ");
	scanf("%d", &n);

	if (n == 0)
	{
		count = 1;
	}
	else
	{
		while (n != 0)
		{
			n = n / 10;
			count++;
		}
	}
	printf("Total number of digits: %d", count);
}
