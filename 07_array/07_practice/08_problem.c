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
                scanf("%d", &mul[i][j]);
            }
            if (i == 1)
            {
                scanf("%d", &mul[i][j]);
            }
            if (i == 2)
            {
                scanf("%d", &mul[i][j]);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if(i==0){
            printf("Row %d is : ", i+1);
        }
        if(i==1){
            printf("\n");
            printf("Row %d is : ", i+1);
        }
        if(i==2){
            printf("\n");
            printf("Row %d is : ", i+1);
        }
        for (int j = 0; j < 10; j++)
        {
            if (i == 0)
            {
                printf("%d, ", mul[i][j]);
            }
            if (i == 1)
            {
                printf("%d, ", mul[i][j]);
            }
            if (i == 2)
            {
                printf("%d, ", mul[i][j]);
            }
        }
    }

    return 0;
}