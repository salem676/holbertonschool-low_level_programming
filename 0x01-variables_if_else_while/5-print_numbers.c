#include <unistd.h>

/**
 *main - prints 0123456789.
 *
 *Return 0.
 */
int main(void)
{
  write(1, "0123456789\n", 11);
  return (0);
}
