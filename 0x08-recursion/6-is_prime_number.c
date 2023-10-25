#include "main.h"
/**
 * _prime2 - prime number
 * @n: the main name
 * @base: base to test for primes
 *
 * Retrun: 1 or 0
 */
int _prime2(int n, int base)
{
	if ((n % base == 0) && (base > 1 && base < n))
	{
		return (0);
	}
	if (n == base)
	{
		return (1);
	}
	else
		base = base + 1;
	return (_prime2(n, base));
}

/**
 * is_prime_number - detects if number is prime
 * @n: the number
 *
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime2(n, 1));
}
