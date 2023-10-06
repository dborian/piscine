#include <stdio.h>
#include <unistd.h>

char *ft_strcapitalize(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if((str[i] < '1' || str[i] > '9') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{

			str[i+1] = str[i+1] - 32;
		}
		else if(i == 0 && (str[i] < 122 && str[i] > 97))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return(str);
}
int main()
{
	char str[] = "j'aime les fraise";
	printf("str d'origine:%s\n", str);
	printf("str changer:%s\n", ft_strcapitalize(str));
	return(0);
}
