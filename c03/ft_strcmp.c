#include <stdio.h>
#include <unistd.h>
#include <string.h>
int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] != '\0')
	{
		if(s1[i]-s2[i] != 0)
		{
			return(s1[i]-s2[i]);
		}
		i++;
	}
	return(s1[i]-s2[i]);
}

int	main(void)
{
	char s1[] = "salu";
	char s2[] = "salut";
	printf("ma valeur %d\n", ft_strcmp(s1, s2));
	printf("ma valeur %d\n", strcmp(s1, s2));
	return(0);
}
