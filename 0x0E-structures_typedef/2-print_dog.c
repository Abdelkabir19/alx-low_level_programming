#include <stdio.h>
#include "dog.h"

/**
 * print_dog - check the code
 *
 *@d: lmh
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if(d)
	{
		printf("Name: %s\n",d->name ? d->name :"(nil)");
		printf("Age: %f\n",d->age);
		printf("owner: %s\n",d->owner ? d->owner : "(nil)");
	}
}
