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
            break; // exit from loop
        }
        
    }
    
    return 0;
}
