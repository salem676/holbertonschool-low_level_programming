#include <stdio.h>
#include <unistd.h>
/**
 *Main - prints out the last part of a quote in the standard error.
 *Return: 1 if everything works fine.
 *
*/
int main(void)
{
  write(2,"and that piece of art is useful - Dora Korpar, 2015-10-19\n",58);
  return (1);
}
