#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if(power > 1)
	{
		nb = nb * ft_recursive_power(nb, power-1);
	}
	return (nb);
}
int	main(void)
{
	int nb;
	int power;

	nb = 3;
	power = 3;
	printf("%d^%d = %d\n",nb, power, ft_recursive_power(nb, power));
	return (0);
}
