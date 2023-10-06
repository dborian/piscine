#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main()
{
	size_t size = 8;
	char src[] = "salut";
	char dest[] = "";	
	printf("dest = %s\n", strncpy(dest, src, size));
	return(0);
}
