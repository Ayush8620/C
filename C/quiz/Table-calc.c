#include <stdio.h>

int main()
{
    int Number;
    printf("Enter the Number of which you want table of:- ");
    scanf("%d", &Number);
    printf("The Table of %d is:-\n", Number);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", Number, i, Number * i);
    }
    
    return 0;
}
