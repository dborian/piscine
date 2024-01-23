#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	if(nb > 1)
	{
		nb = nb * ft_iterative_factorial(nb-1);
	}
	return (nb);
}

int	main(void)
{
	printf("nb = %d\n",ft_iterative_factorial(6));
	return (0);
}
