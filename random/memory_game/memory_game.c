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
		if(atoi(actual) < score)
		{
			sprintf(actual, "%d", score);
			fputs(actual, fichier);	
			//j'en suis la pls
		}
		printf("ton score actuelle est de %d et ton meilleur score est %s\n",score, actual);
	}
	else
	{
		// l'utilisateur n'existe pas
		printf("l'utilisateur %s n'existe pas, souhaite tu le créer ?\n1 (oui)\n2 (non)\n", player_name);
		scanf("%d", &answer);
		if(answer == 1)
		{
			fichier = fopen(filename, "a+");
			sprintf(actual, "%d", score);
			fputs(actual, fichier);
			fclose(fichier);
			printf("utilisateur %s créer correctement\n", player_name);
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

void	ft_guess(char player_name[10], int i, int tab[50])
{
	int guess;
	int lives;
	int again;
	int score;

	score = 0;
	lives = 10;
	guess = tab[score] + 1;
	again = 0;
	printf("guess a number\n");
	while(lives > 0)
	{
		scanf("%d", &guess);
		lives = ft_is_good(guess, tab[score], lives);
		if(guess == tab[score])
		{
			score++;
			printf("you guess good\nnow keep upgrading your score\n");
			if(score >= i)
			{
				i++;
				tab[i] = rand() % 100;
			}
		}
	}
	printf("you lose\n%s your score is %d\n",player_name, score);
	ft_file(player_name, score);
	printf("do you want to play again\n1 (yes)\n2 (no)\n");
	scanf("%d", &again);
	if(again == 1)
		ft_guess(player_name, i, tab);
	else
	{
		printf("goodbye\n");
		return;
	}

}

void	ft_connect(void)
{
	int tab[50];
	char player_name[10];

	tab[0] = rand() % 100;
	printf("what's your name\n");
	scanf("%s", player_name);
	ft_guess(player_name, 0, tab);
	return;
}

int	main(void)
{
	ft_connect();
	return(0);
}
