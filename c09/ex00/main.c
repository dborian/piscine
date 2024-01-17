#include "ft.h"
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	
	a = 0;
	b = 1;
	ft_putchar('a');
	printf("\n a\n\n");
	ft_swap(&a, &b);
	printf("a = %d\n a = 1\nb = %d\n b = 0\n\n", a, b);
	ft_putstr("salut");
	printf(" salut\n\n");
	printf("salut fait %d\n salut doit faire 5\n\n", ft_strlen("salut"));
	printf("%d\n 116\n", ft_strcmp("salut", "salu"));
	return(0);
}
