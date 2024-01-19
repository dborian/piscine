#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	long nbr;
	
	nbr = nb;
	if(nbr < 0)
	{
		nbr = nbr * -1;
		ft_putchar('-');
	}
	if(nbr > 10)
		ft_putnbr(nbr/10);
	ft_putchar(nbr%10 + 48);	
}

int	main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-0);
	ft_putchar('\n');
	ft_putnbr(120);
	ft_putchar('\n');
	ft_putnbr(-120);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	return(0);
}
