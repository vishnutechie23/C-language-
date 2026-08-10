#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3;
    /*
    0 --> snake
    1 --> water
    2 --> Gun
    */
    printf("Choose 0 for snake, 1 for water & 2 for Gun\n");
    scanf("%d", &player);
    printf("Computer Chose %d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("It's a Draw! \n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You Win!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You Lose!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You Lose!\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("It's Draw!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You Win!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You Win!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You Lose!\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("It's Draw!\n");
    }
    else
    {
        printf("Something went wrong!");
    }
    return 0;
}