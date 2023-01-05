/**
  * _pow_recursion - calculate the power of an integer
  * @x: integer to calculate its power
  * @y: interger raised to
  * Return: integer
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
