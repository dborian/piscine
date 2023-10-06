#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
	char Char[25] = "char";
	strcpy(Char, "t gentil\n");
	printf("%s", Char);
		return(0);
}
