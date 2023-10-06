#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
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

	nb = nbr;
	if(ft_strlen(base) > 1)
	{
		if(ft_same(base) == 0)
		{
			if(nb < 0)
			{
				nb = nb * -1;
				ft_putchar('-');
			}
			if(nb > 9)
				ft_putnbr_base(nb/10,base);
			ft_putchar(base[nb%10]);
		}	
	}
}
int	main(void)
{
	ft_putnbr_base(-123,"0abc456-89");
}
