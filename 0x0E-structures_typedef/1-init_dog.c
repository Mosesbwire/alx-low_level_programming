#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - initializes a dog struct
  * @d: pointer to dog struct
  * @name: name of dog
  * @age: age of dog
  * @owner: dog's owner
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		exit(EXIT_FAILURE);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
