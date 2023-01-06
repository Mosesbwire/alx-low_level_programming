/**
  * _strlen - calculates length of a string
  * @s: string to get length
  * Return: integer representing length of string
  */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen(s + 1));
}

/**
  * check_palindrome - checks if string is helper, recursively
  * @s: string to check if is palindrome
  * @x: string @s in reverse
  * Return: 1 if string is palindrome otherwise 0
  */

int check_palindrome(char *s, char *x)
{
	if (*s == '\0')
	{
		return (1);
	}

	if (*s != *x)
	{
		return (0);
	}

	return (check_palindrome(s + 1, x - 1));

}

/**
  * is_palindrome - checks if string is a palindrome
  * @s: string to check if is palindrome
  * Return: 1 if string is palindrome otherwise 0
  */

int is_palindrome(char *s)
{
	int x = _strlen(s);

	if (*s == ' ')
	{
		return (1);
	}

	x--;

	return (check_palindrome(s, s + x));
}
