#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	ft_putchar(nb/10+48);
	ft_putchar(nb%10+48);
}


void ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while(a <= 98)
	{
		while(b <= 99)
		{
			ft_putnbr(a);
			ft_putchar(' ');
			ft_putnbr(b);
			if(a < 98)
			{
			ft_putchar(',');
			ft_putchar(' ');
			}
			b++;
		}
		a++;
		b = a+1;
	}
	ft_putchar('\n');
}

int main ()
{
	ft_print_comb2();
	return(0);
}
