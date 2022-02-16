#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses array.
 * @a: direction of first element of array.
 * @n: the number of elements in the array.
 * Description: this function reverses an array of integers.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i;
	int *last;
	int dum;
	/**
	 * @i: used as counter.
	 * @last: pointer to last letter.
	 * @dum: dummy variable.
	 */
	i = 0;
	last = a + n - 1;
	while (i < n / 2)
	{
		dum = *a;
		*a = *last;
		*last = dum;
		a++;
		last--;
		i++;
	}
	a = a - 3;
}
