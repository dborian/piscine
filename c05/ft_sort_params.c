#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int	ft_count(char *str)
{
	int r;
	int i;

	i = 0;
	r = 0;
	while(str[i] != '\0')
	{
		r = r + str[i];
		i++;
	}
	return(r);
}
void	ft_print_params(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	int v;
	int i;
	int c;

	c = 0;
	v = 1;
	i = 1;
	while(c < argc-1)
	{
		while(i <= argc-1)
		{
			if(ft_count(argv[i]) > ft_count(argv[v]))
			{
				v = i;
			}
			i++;
		}
		ft_print_params(argv[v]);
		argv[v] = "";
		i = 1;
		c++;
	}
	return(0);
}
