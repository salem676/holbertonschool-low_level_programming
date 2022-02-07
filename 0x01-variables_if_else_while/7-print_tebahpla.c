#include <stdio.h>

/**
 *main - prints alphabet in reverse.
 *
 *Return 0.
 */
int main(void)
{
	int letter;
	/**
	 *letter - variable integer that takes ASCII values.
	 *
	 *Description: this part refers to variable declaration.
	 */
	letter = 'z';
	while(letter >= 'a' && letter <= 'z')
		putchar(letter--);
	putchar('\n');
	return (0);
}
