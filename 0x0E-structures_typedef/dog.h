#ifndef DOG_H
#define DOG_H
/**
  * struct dog - new type:struct dog
  * @name: name of dog
  * @age: age of the dog
  * @owner: name of owner of dog
  * Description: struct with dog details
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*DOG_H*/
