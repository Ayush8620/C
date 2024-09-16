#include <stdio.h>

int main()
{
    // pointer arithematics

    /*

        int a = 8;
        char b = '8';

        int *ptra = &a;
        char *ptrb = &b;

        printf("%d\n", ptra); // you can use %x or %p aswell, no change occures
        printf("%d\n", ptrb);

        ptra++ ; // here we add 1 but address is in bytes form so in my architecture 1 int = 4 bits
        ptrb++ ; // here we add 1 but address is in bytes form so in my architecture 1 char = 1 bits

        printf("%d\n", ptra);
        printf("%d", ptrb);

    */

    // array and pointer arithematics

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("the value of index 0 in arr is %d\n", arr[0]);

    printf("the address of index 0 in arr is %d\n", &arr[0]); // here &arr[0] == arr
    printf("the address of index 0 in arr is %d\n", arr);     // here &arr[0] == arr , dono same baat ahi

    printf("the address of index 1 in arr is %d\n", &arr[1]);   // here &arr[1] == arr + 1
    printf("the address of index 1 in arr is %d\n\n", arr + 1); // here &arr[1] == arr + 1, dono same baat hai

    // we cannot do arr++ or arr-- because arr is address of arr[0] which is a constant so we cannot change this. gives error

    printf("the value at address of index 0 in arr is %d\n", *(&arr[0]));
    printf("the value at address of index 0 in arr is %d\n", arr[0]); // teno same baat hai
    printf("the value at address of index 0 in arr is %d\n", *(arr));

    printf("the value at address of index 1 in arr is %d\n", *(&arr[1]));
    printf("the value at address of index 1 in arr is %d\n", arr[1]); // teno same baat hai
    printf("the value at address of index 1 in arr is %d\n", *(arr + 1));

    return 0;
}