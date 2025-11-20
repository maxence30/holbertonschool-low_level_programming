#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;
	int i, len;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	/* Copy name manually */
	len = 0;
	while (name[len])
		len++;
	name_copy = malloc(len + 1);
	if (!name_copy)
	{
		free(d);
		return (NULL);
	}
	i = 0;
	while (name[i])
	{
		name_copy[i] = name[i];
		i++;
	}
	name_copy[i] = '\0';

	/* Copy owner manually */
	len = 0;
	while (owner[len])
		len++;
	owner_copy = malloc(len + 1);
	if (!owner_copy)
	{
		free(name_copy);
		free(d);
		return (NULL);
	}
	i = 0;
	while (owner[i])
	{
		owner_copy[i] = owner[i];
		i++;
	}
	owner_copy[i] = '\0';

	/* Initialize struct */
	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}
