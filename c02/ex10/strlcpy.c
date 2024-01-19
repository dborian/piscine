#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strlen(char *str)
{
int i = 0;
while(str[i] != '\0')
{
	i++;
}
return(i);
}
char	*ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i = 0;
	int len =  ft_strlen(src);
	if(len <= size)
	{
		size = len;
	}
	src[size+1] = '\0';
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return(dest);

}

int	main()
{ 
	int size = 100; 
	char dest[] = ""; 
	char src[] = "salut"; 
	printf("fonction créer: %s\n", ft_strlcpy(dest, src, size)); 
	return(0);
}
