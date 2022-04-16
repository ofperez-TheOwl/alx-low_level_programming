#ifndef PROTOTYPES
#define PROTOTYPES

/**
 * struct op - Struct operator
 * @op: pointer to char, operator
 * @f: pointer to function taking 2 ints as argument
 *
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* 5 different operations */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* selection of correct operation function to perform */
int (*get_op_func(char *s))(int, int);

#endif
