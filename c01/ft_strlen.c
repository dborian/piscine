#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		printf("str[%d]= %c\n", i ,str[i]);
		i++;
	}
return(i);
}

int main()
{
	char *str = "Salut";
	printf("str=%s\n strlen= %d\n", str, ft_strlen(str));
	return(0);
}
