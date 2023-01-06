/**
  * _strlen_recursion - gets length of a string
  * @s: string to check length
  * Return: integer indicating length of string
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
