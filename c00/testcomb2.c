#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	comb(int n)
{
	int	a;
	int	b;

	if (n > 9)
	{
		a = n / 10;
		b = n % 10;
		ft_putchar(a + '0');
		ft_putchar(b + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(n + '0');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			comb(x);
			ft_putchar(' ');
			comb(y);
			if (x < 98 || y < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			y++;
		}
		x++;
	}
}
int main(void)
{
	ft_print_comb2();
}
