/**
  * _isupper - checks if param given is uppercase
  * @c: argument to be checked
  * Return: 1 if uppercase otherwise 0
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
