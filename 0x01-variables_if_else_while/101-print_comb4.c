#include <stdio.h>

/**
 * main - prints all possible combinations of three digits
 *
 * Return: Always 0
 */
int main(void)
{
  int i, j, k;

  for (i = 0; i < 1000; i++)
    {
      j = i / 10;
      k = i % 10;

      if (j < k)
	{
	  j = (i / 100) + '0';
	  k = (i / 10) % 10 + '0';
	  i = (i % 10) + '0';

	  putchar(j);
	  putchar(k);
	  putchar(i);

	  if (i != '9' || j != '7' || k != '8')
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
    }

  putchar('\n');
  return (0);
}
