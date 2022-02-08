#include "main.h"
/**
 *print_alphabet_x10 - this function prints the alphabetx10.
 *
 *Return: void.
 */
void print_alphabet_x10(void)
{
	int letter;
	int i;
	/**
	 *letter - represents letter char.
	 *i - functions as a counter.
	 *
	 *Description: this part refers to variable declaration.
	 */
	letter = 'a';
	for (i = 0; i <= 9; i++)
	{
		while (letter >= 'a' && letter <= 'z')
			_putchar(letter++);
		_putchar('\n');
		letter = 'a';
}
