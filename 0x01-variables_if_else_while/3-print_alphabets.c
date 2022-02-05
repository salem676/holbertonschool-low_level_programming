#include <stdio.h>

/**
 *main - prints alphabet in lowercase and uppercase.
 *
 *Return:0.
 */
int main(void)
{
	int letter;
	
	letter = 'a';
	while(letter >= 'a' && letter <= 'z')
		putchar(letter++);
	letter = 'A';
  	while(letter >= 'A' && letter <= 'Z')
		putchar(letter++);
	putchar('\n');
	return(0);
}
