#ifndef DOG_H
#define DOG_H
/**
  * struct dog - poppy
  * @name: name of the poppy
  * @age: age
  * @owner: owner of the poppy
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
