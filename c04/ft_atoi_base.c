#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}
int	ft_find(char *str, char f)
{
	int i;
	int c;

	c = 0;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == f)
			c++;	
		i++;
	}
	return(c);
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

long	ft_charintoint(char *str)
{
	int i;
	long r;
	int v;

	r =0;
	i = 0;
	v = 0;
	while(str[i] != '\0' && v == 0)
	{
		while(str[i] <= '9' && str[i] >= '0')
		{
			r = r * 10 + (str[i] - 48);
			v++;
			i++;
		}
		i++;
	}
	return(r);
}

void	ft_recursive(int nb, int len, char *base)
{
	if(nb >= len)
		ft_recursive(nb/len, len, base);
	ft_putchar(base[nb%len]);
}
int	ft_atoi_base(char *str, char *base)
{
	long nb;
	int len;

	nb = ft_charintoint(str);
	len = ft_strlen(base);
	if(len > 1)
	{
		if(ft_same(base) == 0)
		{
			if(ft_find(str, '-') <= ft_find(str, '+'))
				ft_putchar('+');
			else
				ft_putchar('-');

			ft_recursive(nb, len, base);
		}
	}
}
int	main(void)
{
	ft_atoi_base("  -+-+-40", "0123456789abcdef");
	ft_putchar('\n');
	ft_atoi_base("  --++--31", "0123456789abcdef");
	ft_putchar('\n');
	ft_atoi_base(" ++--++15", "01");
	ft_putchar('\n');
	ft_atoi_base("  ++--+15", "0123456789");
	ft_putchar('\n');
	ft_atoi_base("  --++-16", "01");
	ft_putchar('\n');
	ft_atoi_base(" -2147483647", "0123456789abcdef");
	ft_putchar('\n');
	ft_atoi_base("  +2147483648", "0123456789abcdef");
	ft_putchar('\n');
	return(0);
}
