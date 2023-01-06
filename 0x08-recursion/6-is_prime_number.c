/**
  * check_prime - helper function recursively checks if number is prime
  * @n: integer to check if is prime number
  * @x: divisor for @n
  * Return: 1 if n is prime. Otherwise 0
  */

int check_prime(int n, int x)
{
	if (n <= 2)
	{
		if (n == 2)
		{
			return (1);
		}

		return (0);
	}

	if (n % x == 0)
	{
		return (0);
	}

	if (x * x > n)
	{
		return (1);
	}

	return (check_prime(n, x + 1));
}

/**
  * is_prime_number - checks if number is prime
  * @n: integer to check if is prime
  * Return: 1 if n is prime, otherwise return 0
  */


int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
