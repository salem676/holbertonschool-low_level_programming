#include <stdio.h>
/**
 *main - prints 0123456789 with putchar function.
 *
 *Return 0.
 */
int main(void)
{
  int number;
  number='0';
  while(number>='0'&&number<='9')
    putchar(number++);
  putchar('\n');
  return (0);
}
