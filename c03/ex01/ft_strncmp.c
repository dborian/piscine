#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int i;
	
	i=0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while(n >= i)
	{
		if((s1[i]-s2[i] != 0) || (ft_strlen(s1) == i) ||
				(ft_strlen(s2) == i))
		{
			return(s1[i]-s2[i]);
		}
		i++;
	}
	return(s1[i]-s2[i]);
}
int	main(void)
{
	printf("ft_strncmp : %d\n", ft_strncmp("salut","sazue",3));
	printf("strncmp : %d\n", strncmp("salut","sazue",3));
	return(0);
}
