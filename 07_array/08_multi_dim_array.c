#include <stdio.h>

int main()
{
    int n_students = 3;
    int n_subjects = 5;
    int marks[n_students][n_subjects];
    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("Enter the marks of student %d in subject %d : ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("The marks of student %d in subject %d is : %d \n", i + 1, j + 1, marks[i][j]);
        }
    }

    int *ptr = &marks[0][0];
    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("The marks of student %d in subject %d is : %d \n", i + 1, j + 1, *ptr++);
        }
    }
    // both for loops will give same output using marks[i][j] and *ptr++
    return 0;
}