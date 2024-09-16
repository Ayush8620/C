#include <stdio.h>

//by array as a perimeter 
void func1(int array[]){
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", array[i]);
    }
    array[1] = 10; //if you change any element of array here it will get reflected in main() also
}

//by array as a pointer
void func2(int *array){
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", *(array + i));
    }
    *(array + 1) = 18; //if you change any element of array here it will get reflected in main() also
}

//basiclly both func1 and func2 are same

//for 2D array
void func3(int array2D[][2]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d %d = %d\n", i, j, array2D[i][j]);
        }
        
    }
    
}

int main()
{
    int arr1[] = {1, 3, 8, 14}; // 1-D array
    int arr2[][2] = {{7, 8}, {3, 4}}; // 2-D array
    //
    printf("%d\n", arr1[1]);
    func1(arr1);
    //
    func2(arr1);
    printf("%d\n", arr1[1]);
    //
    printf("2D\n");
    func3(arr2);

    return 0;
}