#include <stdio.h>
#include <unistd.h>
#include <bsd/string.h>

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int len;
	
	len = 0;
	if(size > 0 && size < ft_strlen(dest))
		len = ft_strlen(src) + size;
	else if
}
int	main(void)
{
	char *c4 = "";
	
	char *c1 = "source";
	
	char *c11 = "source";
	
	char c2[] = "destination";
	
	char c3[] = "destination";
	
	printf("\nTest de ft_strlcat :\n");
	
	char d2[100] = "destination";
	
	char d21[100] = "destination";
	
	char d3[100] = "destination";
	
	char d4[100] = "destination";
	
	char d5[100] = "dest";
	
	char d6[100] = "dest";
	
	char d7[100] = "dest";
	
	char d8[100] = "";
	
	char d9[100] = "dest";
	
	char d10[100] = "";
	
	char d11[100] = "dest";
	
	printf("11,1- destination : %u, %s\n", ft_strlcat(d2, c1, 5), d2);
	
	printf("11,1- destination : %lu, %s\n\n", strlcat(d21, c11, 5), d21);

	printf("14, destination : %u, %s\n\n", ft_strlcat(d3, c1, 8), d3);

	printf("17, destinations : %u, %s\n\n", ft_strlcat(d4, c1, 13), d4);
	
	printf("10, dest : %u, %s\n\n", ft_strlcat(d5, c1, 5), d5);
	
	printf("10, destsou: %u, %s\n\n", ft_strlcat(d6, c1, 8), d6);
	
	printf("10, destsource : %u, %s\n\n", ft_strlcat(d7, c1, 13), d7);
	
	printf("6, destsource : %u, %s\n\n", ft_strlcat(d8, c1, 13), d8);
	
	printf("4, dest : %u, %s\n\n", ft_strlcat(d9, c4, 13), d9);
	
	printf("6,  : %u, %s\n\n", ft_strlcat(d10, c1, 0), d10);
	
	printf("0, dest : %u, %s\n\n", ft_strlcat(d11, c4, 0), d11);
	
	return(0);
}
