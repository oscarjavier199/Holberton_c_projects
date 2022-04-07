#ifndef CAT_H
#define CAT_H

/**
 ** struct cat - a cat's basic info.
 ** @name: First member.
 ** @age: Second member.
 ** @owner: Third member.
 ** Description: Long description.
 **/
struct cat
{
char *name;
float age;
char *owner;
};

/**
 ** cat_t - typedef for struct cat
 **/
typedef struct cat cat_t;

void init_cat(struct cat *d, char *name, float age, char *owner);
void print_cat(struct cat *d);
cat_t *new_cat(char *name, float age, char *owner);
void free_cat(cat_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif