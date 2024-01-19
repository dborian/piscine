#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

int	ft_tablen(int size, char **tab)
{
	int i;
	int n;

	n = 0;
	i = 0;
	while(i < size)
	{
		n = n + ft_strlen(tab[i]);
		i++;
	}
	return(n);
}

char	*ft_strcat(char *dest,char *src)
{
	int i;
	int d;

	i = 0;
	d = ft_strlen(dest);
	while(src[i] != '\0')
	{
		dest[d] = src[i];
		i++;
		d++;
	}
		dest[d] = '\0';
	return(dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*r;
	int	len;
	int	i;

	i = 0;
	len = ft_tablen(size, strs) + (size-1) * ft_strlen(sep) + 1;
	r = malloc(sizeof(char) * len);
	while(i < size)
	{
		r = ft_strcat(r, strs[i]);
		i++;
	}
	return(r);
}

int	main(void)
{
	char	*r;
	char	*tab[4];
	tab[0] = "1";
	tab[1] = "2";
	tab[2] = "3";
	tab[3] = "4";
	r = ft_strjoin(4, tab, "; ");
	printf("%s\n", r);
	free(r);
	return(0);
}
