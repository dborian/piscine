#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

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
char	*ft_strdup(char *src)
{
	int i;
	char *dest;

	i = 0;
	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
int	main(void)
{
	char *dest;
	dest = ft_strdup("salut");
	printf("dest = %s\n", dest);
	free(dest);
	return(0);
}
