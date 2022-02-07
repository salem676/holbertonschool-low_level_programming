#include <stdio.h>
/**
 *main - prints alphabet in lowercase.
 *
 *
 *Return:0.
 */
int main(void)
{
	int letter;
	/**
	 *letter - represents a numeric value analogue to ASCII letter.
	 *
	 *Description: this parts refers to variable declaration.
	 */
	letter = 'a';
	while (letter >= 'a' && letter <= 'z')
		putchar(letter++);
	putchar('\n');
	return (0);
}
