#include "holberton.h"
/**
 *print_alphabet - prints the alphabet.
 *
 *Return: void.
 */
void print_alphabet(void)
{
	int letter;
	/**
	 *letter - represents letter character.
	 *
	 *Description: this part refers to variable declaration.
	 */
	letter = 'a';
	while (letter >= 'a' && letter <= 'z')
		_putchar(letter++);
	_putchar('\n');
}
