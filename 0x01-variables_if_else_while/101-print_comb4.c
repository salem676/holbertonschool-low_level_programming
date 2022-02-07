#include <stdio.h>

/**
 *main - prints numbers 000-999.
 *
 *Return 0.
 */
int main(void)
{
	int i;
	int j;
	int k;
	/**
	 *i,j,k - variables refer to numerical values (integers).
	 *
	 *Description: this part is where variables are declared.
	 */
	j = 0;
	for (i = '0' ;i <= '9'; i++)
	{
		j = i;
		while (++j <= '9')
		{
			k = j;
			while (++k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7' && j == '8' && k == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
