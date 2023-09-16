#include <stdio.h>

int main()
{
    // int arr[3][2] = {{1, 4},
    //                  {7, 9},
    //                  {11, 22}}; // -- Initialization of a 2d array for understanding tabular row column approach
int arr[3][2] = {1, 4, 7, 9, 11, 22,};  // This is simple way of initialization                


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value of arr[%d][%d] is %d \n", i, j, arr[i][j]);
        }
    }

    // A 2d array like a 1d array is stored in contiguous memory blocks like this.
    // if ptr points to index [0][0] , ptr++ will point to index [0][1] and so on ...

    int *ptr = &arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value of arr[%d][%d] is %d \n", i, j, *ptr++);
        }
    }

    return 0;
}