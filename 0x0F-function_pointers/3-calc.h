#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>
/**
 * struct calc - Struct calc
 * @calc: the operator
 * @action: the function associated
 */
typedef struct calc
{
	char *calc;
	int (*action)(int a, int b);
} calc_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
