#include <stdio.h>

/**
* main - print the alphabet in lowercase letters in reverse
*
* Return: Always 0 (success)
*/
int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);
putchar('\n');
return (0);
}
