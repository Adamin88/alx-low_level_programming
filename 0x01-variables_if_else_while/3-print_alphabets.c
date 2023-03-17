#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
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
