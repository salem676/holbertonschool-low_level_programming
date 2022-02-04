#include <stdio.h>
/**
 *main - prints alphabet in lowercase.
 *
 *
 *Return - 0.
 */
int main(void)
{
  int letter;
  letter='a';
  while(letter>='a'&&letter<='z')
    putchar(letter++);
  putchar('\n');
  return (0);
}
