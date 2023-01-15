#include <stdio.h>

int main()
{
    int
        i = 1,
        j = 1;
    int arr1[3][3];

    for (i = 1; i < 4; i++)

    {
        for (j = 1; j < 4; j++)

        {
            printf("The value for row is %d and value for column is %d \n", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    return 0;
}