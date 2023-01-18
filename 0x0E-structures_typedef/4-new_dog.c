#include <stdlib.h>
#include "dog.h"
/**
 * len - find length of string
 * @str: string
 * Return: length
 */
int len(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		;
	return (i);
}
/**
 * strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= len(src); i++)
		dest[i] = src[i];
	return (dest);
}

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
		cp_name = malloc(len(name) + 1);
		if (cp_name == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->name = _strcpy(cp_name, name);
	} else
	{
		dog->name = NULL;
	}

	if (owner != NULL)
	{
		cp_owner = malloc(len(owner) + 1);
		if (cp_owner == NULL)
		{
			free(cp_name);
			free(dog);
			return (NULL);

		}
		dog->owner = _strcpy(cp_owner, owner);
	} else
	{
		dog->owner = NULL;
	}
	return (dog);

}
