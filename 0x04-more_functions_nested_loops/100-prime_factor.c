#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of the number
 */
long int largest_prime_factor(long int n)
{
	long int i;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}

	if (n > 2)
	{
		return (n);
	}

	return (i - 2);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int number = 612852475143;
	long int largest_prime;

	largest_prime = largest_prime_factor(number);
	printf("%ld\n", largest_prime);

	return (0);
}
