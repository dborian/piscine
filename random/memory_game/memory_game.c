#include <stdio.h>
#include <stdlib.h>

int	ft_chartoint(char *str)
{
	int i;
	int r;

	i = 0;
	r = 0;
	while(str[i] != '\0')
	{
		r = (r - 48) * 10 + str[i];
		i++;
	}
	return(r);
}

void	ft_file(char *player_name,int score)
{
	char filename[10];
	char actual[10];
	FILE* fichier = NULL;
	int answer;

	sprintf(filename,"%s.txt",player_name);
	fichier = fopen(filename, "r+");
	answer = 0;
	if (fichier != NULL)
	{
		// l'utilisateur existe
		fgets(actual, 10, fichier);
		printf("ton score actuelle est de %d et ton meilleur score est %d\n",score, ft_chartoint(actual));
	}
	else
	{
		// l'utilisateur n'existe pas
		printf("cette utilisateur n'existe pas voulez vous le créer ?\n1 (oui)\n2 (non)\n");
		scanf("%d", &answer);
		if(answer == 1)
		{
			fopen(filename, "a+");
			fputc('0', fichier);
			fclose(fichier);
			ft_file(player_name, score);
			return;
		}
		else
		{
			printf("votre score ne sera pas enregistrer");
		}
		return;
	}
}
int	ft_is_good(int guess, int nbr, int lives)
{
	if(guess <= 100 && guess >= 0)
	{
		if(guess < nbr)
		{
			printf("the number is bigger\n");
			lives--;
		}
		else if(guess > nbr)
		{
			printf("the number is littler\n");
			lives--;
		}
	}
	else
		printf("wrong entry");
	return(lives);
}

void	ft_guess(void)
{
	int nbr;
	int guess;
	int lives;
	int again;
	int score;
	char player_name[10];

	printf("what's your name\n");
	scanf("%s", player_name);
	nbr = rand() % 100;
	lives = 10;
	guess = nbr + 1;
	again = 0;
	score = 0;
	printf("guess a number\n");
	while(lives > 0)
	{
		scanf("%d", &guess);
		lives = ft_is_good(guess, nbr, lives);
		if(guess == nbr)
		{
			score++;
			nbr = rand() % 100;
			printf("you guess good\nnow keep upgrading your score\n");
		}
	}
	printf("you lose\n%s your score is %d\n",player_name, score);
	ft_file(player_name, score);
	printf("do you want to play again\n1 (yes)\n2 (no)\n");
	scanf("%d", &again);
	if(again == 1)
		ft_guess();
	else
	{
		printf("goodbye\n");
		return;
	}

}

int	main(void)
{
	ft_guess();

	return(0);
}
