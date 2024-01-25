#include <stdio.h>

int	ft_fibonacci(int index)
{
	if(index <= 0)
		return (0);
	else if(index == 1)
		return (1);
	else
		return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main(void)
{
	int i;

	i = 10;
	printf("%d nombre = %d\n", i, ft_fibonacci(i));
	return (0);
}
