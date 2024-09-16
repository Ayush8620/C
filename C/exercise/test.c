#include <stdio.h>

int is_integer(float num)
{
    return (num == (int)num);
}

void sortprime(int num)
{
    if (num > 1)
    {
        int a = num / num;
        if (is_integer(a))
        {
            printf("The Number %d is a Prime Number", num);
        }

        printf("The Number %d is NOT a Prime Number", num);
    }

    printf("The Number %d is NOT a Prime Number", num);
}

int main()
{
    sortprime(3);

    return 0;
}