#include "./ft.h"

int	main(void)
{
	ft_putchar('c');
	return(0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
	}
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] != '\0')
	{
		if(s1[i]-s2[i] != 0)
			return(s1[i]-s2[i]);
		i++;
	}
	return(s1[i]-s2[i]);
}
