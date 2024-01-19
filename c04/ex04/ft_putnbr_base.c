#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

int	ft_same(char *str)
{
	int i;
	int b;

	i = 0;
	b =1;
	while(str[i] != '\0')
	{
		while(str[b] != '\0' && str[b] != str[i])
		{
			b++;
			if(i == b)
				b++;
		}
		if(b != ft_strlen(str) || str[i] == '+' || str[i] == '-')
			return(1);
		b = 0;
		i++;
	}
	return(0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long nb;
	int len;

	nb = nbr;
	len = ft_strlen(base);
	if(len > 1)
	{
		if(ft_same(base) == 0)
		{
			if(nb < 0)
			{
				nb = nb * -1;
				ft_putchar('-');
			}
			if(nb >= len)
				ft_putnbr_base(nb/len,base);
			ft_putchar(base[nb%len]);
		}	
	}
}

int	main(void)
{
	ft_putnbr_base(40, "0123456789abcdef");
	printf("\nexpected = 28\n\n");
	ft_putnbr_base(31, "0123456789abcdef");
	printf("\nexpected = 1f\n\n");
	ft_putnbr_base(15, "01");
	printf("\nexpected = 1111\n\n");
	ft_putnbr_base(-15, "0123456789");
	printf("\nexpected = -15\n\n");
	ft_putnbr_base(-16, "01");
	printf("\nexpected = -10000\n\n");
	ft_putnbr_base(2147483647, "0123456789abcdef");
	printf("\nexpected = 7fffffff\n\n");
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	printf("\nexpected = 80000000\n\n");
	return(0);
}
