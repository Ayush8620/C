#include <stdio.h>

int main()
{
    int num, i ;
    printf("Enter a number\n");
    scanf("%d", &num);

    for ( i = 0; i < num; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}