#include <stdio.h>

/**
 *main - prints alphabet in lowercase and uppercase.
 *
 *Return:0.
 */
int main(void)
{
	int letter;
	/**
	 *letter - variable analogue to ASCII letter value.
	 *
	 *Description: this part refers to variable declaration.
	 */
	letter = 'a';
	while(letter >= 'a' && letter <= 'z')
		putchar(letter++);
	letter = 'A';
  	while(letter >= 'A' && letter <= 'Z')
		putchar(letter++);
	putchar('\n');
	return(0);
}
