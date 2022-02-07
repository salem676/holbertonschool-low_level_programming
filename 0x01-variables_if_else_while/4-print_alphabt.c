#include <stdio.h>

/**
 *main - program that prints alphabet in lowercase.
 *
 *Return: 0.
 */
int main(void)
{
	int letter;
	/**
	 *letter: variable analogue to ASCII letter.
	 *
	 *Description: this part refers to variable declaration.
	 */
	letter = 'a';
	while (letter >= 'a' && letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
