#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, i ;
    printf("Enter a number\n");
    scanf("%d", &num);

    i = 0;

    //do_while loop
/*
    do
    {
        i++ ;
        printf("%d \n", i);
    } while (i < num);
*/
    
    //while loop

    while (i < num)
    {
        i = i + 1 ;
        printf("%d \n", i);
    }
    
    return 0;
} 
