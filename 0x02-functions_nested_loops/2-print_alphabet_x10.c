#include "main.h"

/**
 * print _alphabet_x10 - Print the alpha 10 times in lowercase
 */
void  print_alphabet_x10(void)
{
int count = 0;
char letter;
while (count++ <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n')
}
}
