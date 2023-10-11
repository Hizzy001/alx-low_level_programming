#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of a type struct dog
 * @d: point to the struct dog to initialize
 * @name: name the initialize
 * @age: age to the initialize
 * @owner: owner of the initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
