#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int r;
	r = nb;
	if(nb >= 0)
	{
		nb--;
		while(nb > 0)
		{
			r = r * nb;
			nb--;
		}
		return (r);
	}
	else
		return (0);
}
int	main(void)
{
	printf("r = %d\n",ft_iterative_factorial(-1));
	return (0);
}
