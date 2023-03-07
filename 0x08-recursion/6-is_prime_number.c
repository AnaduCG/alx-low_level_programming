#include "main.h"
/**
 * prime - checks for a divisible prime int
 * @n: variable type int
 * Return: 0 if not prime, 1 if prime
 */

int prime(int num1, int num2)
{
    if (num1 % num2 == 0)
    {
        return (0);
    }
    if (num2 == num1 / 2)
    {
        return (1);
    }
    return (prime(num1, num2 + 1));
}

/**
 * is_prime_number - checks for a prime int
 * @n: variable type int
 * Return: 0 if not prime, 1 if prime
 */
int is_prime_number(int n)
{
    int num2 = 2;

    if  (n <= 1)
        {
            return (0);
        }
        if (n >= 2 && n <= 3)
        {
            return (1);
        }
        return (prime(n, num2));
}