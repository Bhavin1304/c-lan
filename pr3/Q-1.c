// Q.1) Alphabet Skipper
// Develop a program that prints all alphabets from "a' to "z' by skipping 3 alphabets using a
// do-while loop.

#include <stdio.h>

void main()
{
	char d = 'a';
	do
	{
		printf("%c ", d);
		d = d + 4;
	} while (d <= 'z');
}
