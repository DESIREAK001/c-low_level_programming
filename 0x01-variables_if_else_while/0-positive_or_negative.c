#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - this is the main function
  *Return: 0
  */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	printf("%d is greaater than 0\n", n);
	else if (n < 0)
	printf("%d is less than 0\n", n);
	else
	printf("%d is 0\n", n);
	return (0);
}
