#include <stdio.h>
#include <stdarg.h>

/**
  * num_args - counts correct number of format chars passed in
  * @args: pointer to argument string
  * Return: integer - total number of correct format chars
  */

int num_args(char *args)
{
	int x;
	int y;
	
	x = 0;
	y = 0;
	while (*(args + x) != '\0')
	{	
		if (args[x] == 'c' || args[x] == 'i' || args)
		x++;
	}
}
