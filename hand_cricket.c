#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int player_choice;
	int comp_choice;
	int player_score = 0;
	int comp_score = 0;
	int toss_num;
	int user_toss;
	int player_batting;
	srand(time(NULL));
	printf("=================================\n");
	printf("       WELCOME TO HAND CRICKET\n");
	printf("=================================\n");
	printf("\nChoose 1 -> Odd or 2 -> Even: ");
	scanf("%d", &player_choice);
	while (player_choice != 1 && player_choice != 2)
	{
		printf("Invalid choice! Please enter 1 for Odd or 2 for Even: ");
		scanf("%d", &player_choice);
	}
	printf("Enter a number between (1 - 6): ");
	scanf("%d", &toss_num);

	while (toss_num < 1 || toss_num > 6)
	{
		printf("Invalid number! Please enter a number between 1 and 6: ");
		scanf("%d", &toss_num);
	}
	comp_choice = rand() % 6 + 1;

	printf("Computer chose: %d\n", comp_choice);

	if ((toss_num + comp_choice) % 2 == 0)
	{
		user_toss = 2;  
	}
	else
	{
		user_toss = 1;   
	}
	if (user_toss == player_choice)
	{
		printf("\nYou Won the Toss!\n");

		printf("Choose Bat (1) or Bowl (2): ");
		scanf("%d", &player_batting);

		while (player_batting != 1 && player_batting != 2)
		{
			printf("Invalid choice! Enter 1 for Bat or 2 for Bowl: ");
			scanf("%d", &player_batting);
		}

		if (player_batting == 1)
		{
			printf("You chose to Bat.\n");
		}
		else
		{
			printf("You chose to Bowl.\n");
		}
	}
	else
	{
		printf("\nComputer Won the Toss!\n");

		player_batting = rand() % 2 + 1;

		if (player_batting == 1)
		{
			printf("Computer chose to Bowl.\n");
		}
		else
		{
			printf("Computer chose to Bat.\n");
		}
	}
	if (player_batting == 1)
	{
		printf("\n=================================\n");
		printf("          YOU BAT FIRST\n");
		printf("=================================\n");

		while (1)
		{
			printf("\nEnter your run (1 - 6):");
			scanf("%d", &player_choice);

			while (player_choice < 1 || player_choice > 6)
			{
				printf("Invalid run! Please enter a number between 1 and 6:");
				scanf("%d", &player_choice);
			}

			comp_choice = rand() % 6 + 1;

			printf("Computer chose: %d\n", comp_choice);

			if (player_choice == comp_choice)
			{
				printf("OUT!\n");
				break;
			}

			player_score += player_choice;

			printf("Your current score: %d\n", player_score);
		}

		printf("\nYour Final Score: %d\n", player_score);
		printf("\n=================================\n");
		printf("       COMPUTER BATS\n");
		printf("=================================\n");

		while (comp_score <= player_score)
		{
			printf("\nEnter your bowl (1 - 6): ");
			scanf("%d", &player_choice);

			while (player_choice < 1 || player_choice > 6)
			{
				printf("Invalid bowl! Please enter a number between 1 and 6: ");
				scanf("%d", &player_choice);
			}

			comp_choice = rand() % 6 + 1;

			printf("Computer chose: %d\n", comp_choice);

			if (player_choice == comp_choice)
			{
				printf("Computer OUT!\n");
				break;
			}

			comp_score += comp_choice;

			printf("Computer current score: %d\n",comp_score);
		}
	}
	else
	{
		printf("\n=================================\n");
		printf("       COMPUTER BATS FIRST\n");
		printf("=================================\n");

		while (1)
		{
			printf("\nEnter your bowl (1 - 6): ");
			scanf("%d", &player_choice);

			while (player_choice < 1 || player_choice > 6)
			{
		             printf("Invalid bowl! Please enter anumber between 1 and 6: ");  
				scanf("%d", &player_choice);
			}

			comp_choice = rand() % 6 + 1;

			printf("Computer chose: %d\n", comp_choice);

			if (player_choice == comp_choice)
			{
				printf("Computer OUT!\n");
				break;
			}

			comp_score += comp_choice;

			printf("Computer current score: %d\n",comp_score);
		}

		printf("\nComputer Final Score: %d\n", comp_score);
		printf("\n=================================\n");
		printf("          YOU BAT\n");
		printf("=================================\n");

		while (player_score <= comp_score)
		{
			printf("\nEnter your run (1 - 6): ");
			scanf("%d", &player_choice);

			while (player_choice < 1 || player_choice > 6)
			{
				printf("Invalid run! Please enter a number between 1 and 6: ");
				scanf("%d", &player_choice);
			}

			comp_choice = rand() % 6 + 1;

			printf("Computer chose: %d\n", comp_choice);

			if (player_choice == comp_choice)
			{
				printf("OUT!\n");
				break;
			}

			player_score += player_choice;

			printf("Your current score: %d\n", player_score);
		}
	}
	printf("\n=================================\n");
	printf("             RESULT\n");
	printf("=================================\n");

	printf("Your Score     : %d\n", player_score);
	printf("Computer Score : %d\n", comp_score);

	if (player_score > comp_score)
	{
		printf("\n🎉 YOU WIN!!! 🎉\n");
	}
	else if (comp_score > player_score)
	{
		printf("\nCOMPUTER WINS!!!\n");
	}
	else
	{
		printf("\nMATCH DRAW!!!\n");
	}

	printf("\nThank you for playing Hand Cricket!\n");

	return 0;
}