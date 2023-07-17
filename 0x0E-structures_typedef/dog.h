#ifndef DOG
#define DOG

/**
 * dog - Its a structure
 * @name: Name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog {
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
#endif
