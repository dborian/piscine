#include <stdio.h>
int	ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	while(nb <= 2147483647)
	{
		i = 2;
		while(nb%i != 0 && i <= nb)
			i++;
		if(i == nb)
			return (nb);
		else
			nb++;
	}
	return(0);
}
int	main(void)
{
	int	nb;
	
	nb = 7;
	printf("next prime after %d is %d\n", nb, ft_find_next_prime(nb));
	return (0);
}
