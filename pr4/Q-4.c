// 1 0 1 0 1
//   1 0 1 0
//     1 0 1
//       1 0
//         1

#include <stdio.h>

void main()
{
	int i, j, d;
	for (i = 5; i >= 1; i--)
	{
		for (d = i; d < 5; d++)
		{
			printf("  ");
		}
		for (j = 1; j <= i; j++)
		{
			if (j % 2 == 0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
}
