#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog's basic info
 * @name: 1
 * @age: 2
 * @owner: 3
 *
 * Description: Longer d
 */
struct dog
	{
	char *name;
	float age;
	char *owner;
	};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
