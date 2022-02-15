#include <stdio.h>
#include "main.h"
/**
 * _atoi - string to number.
 * @s: direction of first element of string
 * Description: this functions returns the first signed
 * number encountered in the string given, as int.
 * Return: void.
 */
int _atoi(char *s)
{
        int count;
        /**
         * @count: counts.
         */
        count = 0;
        while (*s != '\0')
        {
                s++;
                count++;
        }
        return (count);
}
