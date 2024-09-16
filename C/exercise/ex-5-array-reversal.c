#include <stdio.h>
void reversearr(int array[])
{

    int temp[8];
    for (int i = 0; i < 8; i++)
    {
        temp[i] = array[i];
        printf("%d, ", temp[i]);
    }
    for (int j = 0; j < 4; j++)
    {
        int a = 7 - j;
        array[j] = array[a];
    }
    int x = 3;
    for (int k = 4; k < 8; k++)
    {
        array[k] = temp[x];
        x = x - 1;
    }

    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    reversearr(arr);
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}