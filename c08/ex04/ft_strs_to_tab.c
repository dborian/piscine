#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;	
	return (i);
}

int	ft_tablen(int size, char **tab)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (i < size)
		n = n + ft_strlen(tab[i++]);
	return (n);
}

char	*ft_strcat(char *dest,char *src)
{
	int	i;
	int	d;

	i = 0;
	d = ft_strlen(dest);
	while (src[i] != '\0')
		dest[d++] = src[i++];
	dest[d] = '\0';
	return (dest);
}

void	ft_strjoin(int size, char **strs, char **r)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("i = %d\n", i);
		*r = ft_strcat(*r, strs[i]);
		i++;
	}
}

void	ft_strs_to_tab(int ac, char **av, t_stock_str *stock_str)
{
	stock_str->size = ft_tablen(ac, av);
	printf("mon size = %d\n", stock_str->size);
	stock_str->str = malloc(sizeof(char) * stock_str->size + 1);
	ft_strjoin(ac, av, &stock_str->str);
	stock_str->copy = stock_str->str;
}

int	main(int ac, char **av)
{
	int i;

	i = 0;
	t_stock_str	*stock_str;
	stock_str = malloc(sizeof(t_stock_str));
	printf("ac = %d\n", ac);
	while(i < ac)
	{
		printf("av[%d] = %s\n", i, av[i]);
		i++;
	}
	ft_strs_to_tab(ac, av, stock_str);
	printf("str = %s\n", stock_str->str);
	free(stock_str->str);
	free(stock_str);
	return (0);
}
