#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void display(int *array, int mid);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
