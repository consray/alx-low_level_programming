#ifndef DOG_H
#define DOG_H
/**
 * struct dog - contains information of a dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: Longer Description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
god_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
