#ifndef _MAIN_H_
#define _MAIN_H_


#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void errors(void);
int _strlen(char *s);
int is_digit(char *s);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
