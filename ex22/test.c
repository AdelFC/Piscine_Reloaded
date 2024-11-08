#include "ft_abs.h"
#include <stdio.h>

int	main(void)
{
	int a = 42;
	int b = -42;

	printf("Valeur absolue de %d : %d\n", a, ABS(a));
	printf("Valeur absolue de %d : %d\n", b, ABS(b));
	return (0);
}