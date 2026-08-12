#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int player_choice;
    int computer_choice;
    int player_score = 0;
    int computer_score = 0;
    char choice;

    srand(time(NULL));

    do
    {
        printf("\n============================\n");
        printf("   WELCOME TO ROCK PAPER SCISSORS\n");
        printf("============================\n");

        printf("Enter your choice:\n");
        printf("1 = Rock\n");
        printf("2 = Paper\n");
        printf("3 = Scissors\n");
        printf("Your choice: ");
        scanf("%d", &player_choice);

                if (player_choice < 1 || player_choice > 3)
        {
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
        }
        else
        {
            computer_choice = rand() % 3 + 1;

            printf("Computer choice: %d\n", computer_choice);

            
            if (player_choice == computer_choice)
            {
                printf("DRAW!!!\n");
            }

            
            else if ((player_choice == 1 && computer_choice == 3) ||
                     (player_choice == 2 && computer_choice == 1) ||
                     (player_choice == 3 && computer_choice == 2))
            {
                printf("You won this round!\n");
                player_score++;
            }
            
            else
            {
                printf("Computer won this round!\n");
                computer_score++;
            }

            printf("\nYour score: %d\n", player_score);
            printf("Computer score: %d\n", computer_score);
        }

        printf("\nDo you want to play again? Enter Y/y for yes: ");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

    printf("\n============================\n");
    printf("        FINAL RESULT\n");
    printf("============================\n");

    printf("Your score: %d\n", player_score);
    printf("Computer score: %d\n", computer_score);

    if (player_score > computer_score)
    {
        printf("Congratulations! You won the game!\n");
    }
    else if (computer_score > player_score)
    {
        printf("You lost! Computer won the game.\n");
    }
    else
    {
        printf("The game is a draw!\n");
    }

    return 0;
}