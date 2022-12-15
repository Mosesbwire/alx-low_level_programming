/**
  * _isdigit - checks if params is a digit
  * @c: argument to be checked
  *
  * Return: 1 if true 0 otherwise
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
