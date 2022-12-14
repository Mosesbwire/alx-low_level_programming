/**
  * _abs - turns value to its absolute value
  * @n: parameter to be converted to abs value
  *
  *Return: absolute value
  *
  */

int _abs(int n)
{
	int absnum;
	int to_positive = -1;

	if (n < 0)
	{
		absnum = n * to_positive;
	} else
	{
		absnum = n;
	}

	return (absnum);
}

