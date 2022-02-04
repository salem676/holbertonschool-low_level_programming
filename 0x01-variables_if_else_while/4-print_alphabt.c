#include <stdio.h>

/**
 *main - program that prints alphabet in lowercase\n -q -e
 *
 *Return - 0.
 */
int main(void)
{
  
  int letter;
  
  letter = 'a';
  while(letter >= 'a' && letter <= 'z')
    {
      if(letter != 'q' && letter != 'e')
	putchar(letter);
      letter++;
    }
  putchar('\n');
  return (0);
}
