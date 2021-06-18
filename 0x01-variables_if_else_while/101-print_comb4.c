#include

/**
* main - print combinations of digit 3
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
int j;
int k;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
for (k = 0; k < 3; k++)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i !=j && j !=k && k)
{
putchar(',');
putchar(' ');
putchar(' ');
}
}
}
}
putchar("[%d %d %d]\n");
return (0);
}
