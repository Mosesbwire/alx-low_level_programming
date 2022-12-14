/**
  * _islower - checks if argument is lower/uppercase
  * @c: parameter to be checked
  *
  * checks if argument is upper/lowercase
  * Return: 0 or 1
  */

int _islower(int c)
{
	if (c > 'Z')
	{
		return (1);
	}

	return (0);
}
