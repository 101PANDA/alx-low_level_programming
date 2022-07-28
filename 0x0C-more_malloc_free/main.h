#ifndef MAIN_H
#define MAIN_H
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
char *str_concat(char *s1, char *s2);
int _strlen(char *s);
char *_strdup(char *str, int strcount);
#endif
