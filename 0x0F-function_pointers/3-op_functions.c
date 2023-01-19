#include <stdio.h>
#include <stdlib.h>
/**
  * op_add - adds two ints
  * @a: parameter 1
  * @b: parameter 2
  * Return: integer
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts
  * @a: parameter 1
  * @b: parameter 2
  * Return: integer
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies
  * @a: parameter 1
  * @b: parameter 2
  * Return: integer
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides
  * @a: parameter 1
  * @b: parameter 2
  * Return: integer
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - adds two ints
  * @a: parameter 1
  * @b: parameter 2
  * Return: integer
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

