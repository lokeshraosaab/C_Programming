#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess;
    int nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // ----> generates number between 1 and 100 .
    // printf("The number is %d\n", number);
    // Keep running the loop untill the number is guessed.
    printf("Guess the number between 1 to 100 \n");
    do
    {
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("Higher number please\n");
        }
        else if (guess > number)
        {
            printf("Lower number please\n");
        }
        else
        {
            printf("The number is guessed in %d attempts\n", nguesses);
        }
        nguesses++;

    } while (guess != number);

    return 0;
}