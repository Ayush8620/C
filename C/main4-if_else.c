#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your AGE \n");
    scanf("%d", &age); // & address of operator

    if (age < 18)
    {
        printf("You are not eligiable to drive");
    }
    else if (age >= 18)
    {
        printf("You are eligiable to drive");
    }
    else
    {
    printf("INVALID");
    }

    return 0;
}
