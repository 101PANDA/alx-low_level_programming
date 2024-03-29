#ifndef DOG_H
#define DOG_H

/**
 * struct dog - name, age and owner of dog
 * @name: name of dog
 * @age: sge of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new name for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strdup(char *str);
void free_dog(dog_t *d);
#endif
