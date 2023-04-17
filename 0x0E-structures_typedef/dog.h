#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: Define a new a type struct dog with the following elements:
 * name, type = char *
 * age, type = float
 * owner, type = char *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
