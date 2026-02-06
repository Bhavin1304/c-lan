#include <stdio.h>


void checkDivisible(int num)
{
    if (num % 3 == 0 && num % 5 == 0)
        printf("Number is divisible by both 3 and 5\n");
    else
        printf("Number is NOT divisible by both 3 and 5\n");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkDivisible(n);  

  
}

