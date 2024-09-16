#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\nenter your age\n", i);
        scanf("%d", &age);
        if (age > 18)
        {
            continue; // skip all the code inside the loop and continue from starting again
        }

        printf("No continue statement was executed\n");
        printf("No continue statement was executed\n");
        printf("No continue statement was executed\n");
        printf("No continue statement was executed\n");
        printf("No continue statement was executed\n");
        printf("No continue statement was executed\n");
        printf("No continue statement was executed\n");
        printf("No continue statement was executed\n");
        printf("No continue statement was executed\n");
        
        
    }
    
    return 0;
}
