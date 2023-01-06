/**
  * is_prime_number - checks for a prime number
  * @n: integer to check if its prime number
  * Return: 1 if prime number or 0 if not prime number
  * @x: divisor for @n
  *
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


int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
