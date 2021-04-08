#include<stdio.h>
int main()
{
	int secretnumber = 10;
	int myguess;
	int guesslimit = 3;
	int guesscount = 0;
	
	while (myguess != secretnumber && guesscount != guesslimit)
	{
		printf("enter your guess: ");
		scanf("%d", &myguess);
		guesscount++;
		

		if (myguess == secretnumber)
		{
			printf("correct guess. congrats!!!");
		}
		else
		{
			printf("wrong guess. please try again. \n");
			if (guesscount >= guesslimit)
			{
				printf("you are out of guesses");
			}
		}
	}
}

