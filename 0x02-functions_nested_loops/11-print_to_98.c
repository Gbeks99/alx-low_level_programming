#include "main.h"
#include <stdio.h>
/*
 *
 * print to 98 Prints all natural numbers from n to 98. @n: The starting number
 *
 */
<<<<<<< HEAD

void print_to_98 (int n)
=======
void print_to_98(int n)
>>>>>>> 7c5dc959aaca1014dc07ccfdd77871db4de1fc72
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");
}
