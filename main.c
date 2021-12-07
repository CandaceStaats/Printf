#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include "libftprintf.h"
#include <limits.h>

int	main(void)
{
	int	a;
	int	b;

	b = printf(" %p %p \n", LONG_MIN, LONG_MAX);
	a = ft_printf(" %p %p \n", LONG_MIN, LONG_MAX);
	//a = ft_printf("Hello %x%X\n%p\n%%%%%s%d\n%i(%c)%u\n", 5678, 5678, "Hiiiiiiiiiiii", NULL, 0, INT_MAX - 1, 0, UINT_MAX + 1);
	//b = printf("Hello %x%X\n%p\n%%%%%s%d\n%i(%c)%u\n", 5678, 5678, "Hiiiiiiiiiiii", NULL, 0, INT_MAX - 1, 0, UINT_MAX + 1);
	printf("Own Printf %i\n", a);
	printf("Comp Printf %i\n", b);
}
