#ifndef SEARCH_ALGO
#define SEARCH_ALGO
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
#endif
