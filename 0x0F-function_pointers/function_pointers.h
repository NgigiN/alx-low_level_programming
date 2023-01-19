#ifndef FUNCTION_POINTERS_H
#include <stddef.h>
#define FUNCTION_POINTERS_H

int _putchar(char c);
void print_name(char *name, void(*F)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
