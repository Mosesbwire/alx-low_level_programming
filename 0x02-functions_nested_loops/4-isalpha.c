/**
  * _isalpha - checks if parameter is alphabet
  * @c: parameter to be checked
  *
  *Return: 0 or 1
  *
  */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}

	return (0);
}

