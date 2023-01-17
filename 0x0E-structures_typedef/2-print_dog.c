#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
  * print_dog - prints details of struct
  * @d: pointer to struct
  */

void print_dog(struct dog *d)
{

	if (d == NULL)
	{
		printf("\n");
		exit(EXIT_FAILURE);
	}

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}

	printf("Name: %s\n", d->name);

	if (d->age == 0)
	{
		printf("Age: (nil)");
	} else
	{
		printf("Age: %.6f\n", d->age);
	}

	printf("Owner: %s\n", d->owner);


}
