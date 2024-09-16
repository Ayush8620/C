#include <stdio.h>

int main()
{
    int a = 7;
    int *ptra = &a;                                                           // * denotes that this variable is a pointer and & means the address of a
    int *ptr2 = NULL; // null pointer
    printf("The value to a is %d and the the address of a is %x\n", a, ptra); // here %x means hexa decimal variable because pointer give address in hexa decimal format
    printf("The value to a is %d\n", *ptra);                                    // To get value to variable using address we use like this *ptra
    printf("The value to a is %x", ptr2);                                    
    return 0;
}
