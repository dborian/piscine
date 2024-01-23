#include <unistd.h>
#include <math.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_cesar(char *str, int r)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i] - r);
		i++;
	}
	ft_putchar('\n');
}

int	ft_chartoint(char *str)
{
	int i;
	int r;

	r = 0;
	i = 0;
	while(str[i] != '\0')
	{
		r = i * 10;
		r = str[i] - 48;
		i++;
	}
	return(r);
}

int	main(int argc, char *argv[])
{
	char m[25] = "IODJ{YHqL_YlgL_YLfl}";
	printf("str = %s\n", argv[1]);
	int r = ft_chartoint(argv[1]);
	printf("r = %d\n", r);
	ft_cesar(m, r);
	return(0);
}

