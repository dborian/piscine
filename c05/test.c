#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char src[20] = "abcd";
	printf("test return : %s\ntest return len : %ld\n", strdup(src), strlen(strdup(src)));
	char *dest = strdup(src);
	printf("test dest : %s\ntest dest len : %ld\n", dest, strlen(dest));
	return(0);
}
