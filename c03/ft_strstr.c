#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int v;

	v = 0;
	i = 0;
	while(str[i] != '\0' && to_find[v+1] != '\0')
	{
		if(str[i] == to_find[v])
			v++;
		else
			v = 0;
		i++;
	}
	while(str[i] != '\0')
		to_find[v++] = str[i++];
	if(v == 0)
		return("(null)");
	return(to_find);
}

int	main(void)
{
	char to_find[20] = "gue";
	char str[20] = "aigueill";
	printf("\nmon aiguille 1: %s\n", ft_strstr(str,to_find));
	printf("mon aiguille 2: %s\n", strstr(str, to_find));
	return(0);
}
