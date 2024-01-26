#ifndef DOG_H
#define DOG_H
/**
*init_dog - initialises a variable of type struct dog
*@d: pointer to stuct dog to initialise
*@name: name to initialise
*@age: age to initialise
*@owner: owner to initialise
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == null)
	{
		return (0);
	}
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
#endif
