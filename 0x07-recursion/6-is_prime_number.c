#include "holberton.h"
int prime(int n, int i);
/**
* is_prime_number - checks if a number is prime or not
* @n: The number to be evaluated
* Return: If it is prime, 1. Else 0
*/
int is_prime_number(int n)
{
	int i;

	i = 2;
	return (prime(n, i));
}

/**
* prime - checks if a number is prime
* @n: number to be evaluated
* @i: Number to check if divisible
* Return: 1 if prime, 0 if not
*/
int prime(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0 || n <= 1)
		return (0);
	return (prime(n, i + 1));
}
