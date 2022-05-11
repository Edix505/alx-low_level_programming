<<<<<<< HEAD
#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog -Dog data.
 * @name: Name of the dog
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Desctiption: a structure with the name, age and owner of a dog.
**/

typedef struct dog
{
char *name;
char *owner;
float age;
} dog_t;
=======
#ifndef _HEADER_
#define _HEADER_

/**
  * struct dog - Dog attributes
  * @name: The name of the dog.
  * @age: The age of the dog.
  * @owner: The owner of the dog.
  *
  * Description: The attributes of a dog.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

>>>>>>> 0c03e10f08ddd39e6f8d931f45e6b811ec9da15e
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
#endif
