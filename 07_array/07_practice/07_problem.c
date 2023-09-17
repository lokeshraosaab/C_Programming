#include <stdio.h>

int main()
{
    int mul[3][10];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0)
            {
                mul[i][j] = 2 * (j + 1);
            }
            if (i == 1)
            {
                mul[i][j] = 7 * (j + 1);
            }
            if (i == 2)
            {
                mul[i][j] = 9 * (j + 1);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0)
            {
                printf("2*%d = %d\n", j + 1, mul[i][j]);
            }
            if (i == 1)
            {
                printf("7*%d = %d\n", j + 1, mul[i][j]);
            }
            if (i == 2)
            {
                printf("9*%d = %d\n", j + 1, mul[i][j]);
            }
        }
    }

    return 0;
}