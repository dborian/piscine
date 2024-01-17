#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int ft_print(int c, int d, int u)
{
	u++;
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(u);
	if(c != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
		ft_putchar('\n');
	return(u);
}

void ft_print_comb(void)
{
	int c;
	int d;
	int u;

	c = '0'-1;
	d = '0';
	u = '1';
	while(c < '7')
	{
		d = c + 1;
		c++;
		while(d < '8')
		{
			u = d + 1;
			d++;
			while(u < '9')
				u = ft_print(c, d, u);//u++;
		}
	}
}
int main()
{
	ft_print_comb();
	return(0);
}
