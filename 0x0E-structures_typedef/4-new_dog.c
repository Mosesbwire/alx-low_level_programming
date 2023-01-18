#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
  * new_dog - creates a new dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  * Return: pointer to struct or NULL on failure
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *cp_name;
	char *cp_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->age = age;
	if (name != NULL)
	{
		cp_name = malloc(strlen(name) + 1);
		if (cp_name == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->name = strcpy(cp_name, name);
	} else
	{
		dog->name = NULL;
	}

	if (owner != NULL)
	{
		cp_owner = malloc(strlen(owner) + 1);
		if (cp_owner == NULL)
		{
			free(cp_name);
			free(dog);
			return (NULL);

		}
		dog->owner = strcpy(cp_owner, owner);
	} else
	{
		dog->owner = NULL;
	}
	return (dog);

}
