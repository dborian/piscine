#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

char	*ft_strdup(char *src)
{
	char *dest;
	int i;

	i = 0;
	dest = malloc(sizeof(*dest) * ft_strlen(src)+1);
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return(dest);
}
int	main(void)
{
	char *dest;

	dest = ft_strdup("salut");
	free(dest);
}
