#include <stdio.h>
#include <stdlib.h>

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

	nbr = rand() % 100;
	lives = 10;
	guess = nbr + 1;
	again = 0;
	printf("guess a number\n");
	while(lives > 0 && guess != nbr)
	{
		scanf("%d", &guess);
		lives = ft_is_good(guess, nbr, lives);
	}
	if(lives == 0)
		printf("you lose\n");
	else
		printf("gg wp you win\n");
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
