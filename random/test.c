#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fichier = NULL;

	fichier = fopen("test.txt", "w");

	if (fichier != NULL)
	{
		fseek(fichier, 0, SEEK_SET);
		putc('A', fichier); // Écriture du caractère A
		fclose(fichier);
	}

	return 0;
}
