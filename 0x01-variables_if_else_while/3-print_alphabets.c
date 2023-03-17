#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char small_letter = 'a';
while (small_letter <= 'z')
{
putchar(small_letter);
small_letter++;
}
char big_letter = 'A';
while (big_letter <= 'Z')
{
putchar(big_letter);
big_letter++;
}
putchar('\n');
return (0);
}
