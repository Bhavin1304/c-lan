//Write a C program that prompts the user to enter a 3 digit's positive integer. Find the sum of first and last digit.

#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;
	
	printf("Enter a 3-digit positive integer: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    firstDigit = num / 100;

 	sum = firstDigit + lastDigit;

   	printf("Sum of first and last digit = %d\n", sum);
	

}

