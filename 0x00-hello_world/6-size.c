#include<stdio.h>
/**
 *main - is the entry path in C programming
 *return: returns 0 errors if there is none
 */
int main(void)
{
	char var_char;
	int var_int;
	long int var_lint;
	long long int var_llint;
	float var_float;

	printf("Size of a char: %ld byte(s)\n", sizeof(var_char));
	printf("Size of a int: %ld byte(s)\n", sizeof(var_int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(var_lint));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(var_llint));
	printf("Size of a float: %ld byte(s)\n", sizeof(var_float));

	return (0);
}
