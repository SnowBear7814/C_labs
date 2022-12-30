#include <stdio.h>
#include <math.h>


int main()
{
    int length = 9;
    int arr[length];
    int i, j;
    for (i = 0; i < length; i++)
    {
        printf("Array[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < ceil(length / 3.0) ; i++)
        printf("%d  ", arr[i]);
    printf("\n");
    for (i = ceil(length / 3.0); i < 6.0 ; i++)
        printf("%d  ", arr[i]);
    printf("\n");
    for (i = 6.0; i < length ; i++)
        printf("%d  ", arr[i]);
    printf("\n");

    int arr1[2][2] = {2, 5, 2, 2};
    int arr2[2][2] = {1, 2, 0, 1};
    int result[2][2] = {
            arr1[0][0] * arr2[0][0] + arr1[0][1] * arr2[1][0],
            arr1[0][0] * arr2[0][1] + arr1[0][1] * arr2[1][1],
            arr1[1][0] * arr2[0][0] + arr1[1][1] * arr2[1][0],
            arr1[1][0] * arr2[0][1] + arr1[1][1] * arr2[1][1]
    };

    for (j = 0; j < 2 ; j++)
        printf("%d  ", result[0][j]);
    printf("\n");

    for (j = 0; j < 2 ; j++)
        printf("%d  ", result[1][j]);

    return 0;
}
