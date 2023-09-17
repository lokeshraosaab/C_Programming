#include <stdio.h>

void reverseArray(int *ptr, int n)
{
    //for(int i=0, j=9; j && i<n; i++, j--){ // ---> will not reverse the arrow actually with these
    // conditions we are reversing arrow twice .
    for (int i = 0, j = 9; j > 9 / 2 && i < n / 2; i++, j--){
         int temp = *(ptr + i);
        *(ptr + i) = *(ptr + j);
        *(ptr + j) = temp;
    }
}

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverseArray(array, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("array[%d] = %d ;\n", i, array[i]);
    }

    return 0;
}