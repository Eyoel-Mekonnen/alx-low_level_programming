#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - create a new dog struct
 * @name: name string
 * @age: age
 * @owner: owner of dog
 *
 * Return: Adress to newly created struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len = 0, len2 = 0, i;

	dog_t *doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);
	while (name[len] != '\0')
		len++;
	(*doggy).name = malloc(sizeof(char) * len + 1);
	if ((*doggy).name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	while (owner[len2] != '\0')
		len2++;
	(*doggy).owner = malloc(sizeof(char) * len2 + 1);
	if ((*doggy).owner == NULL)
	{
		free(doggy);
		free((*doggy).name);
		free((*doggy).owner);
	}
	for (i = 0; i < len; i++)
	{
		(*doggy).name[i] = name[i];
	}
	doggy->name[i] = '\0';
	for (i = 0; i < len2; i++)
	{
		(*doggy).owner[i] = owner[i];
	}
	doggy->owner[i] = '\0';
	doggy->age = age;
	return (doggy);

}
