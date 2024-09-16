#include <stdio.h>

void star(int k)
{
    for (int i = 0; i < k; i++)
    {
        char b = '*';
        printf("%c", b);
    }
    printf("\n");
}

int main()
{
    int a, num;
    printf("Enter 0 for star pattern and 1 for revers star pattern\n");
    scanf("%d", &a);
    printf("You selected %d, please enter the number of row you want to print star pattern\n", a);
    scanf("%d", &num);

    if (a == 0)
    {
        for (int l = 0; l <= num; l++)
        {
            star(l);
        }
    }
    else if (a == 1)
    {
        for (int j = num; j >= 0; j--)
        {
            star(j);
        }
    }
    else
    {
        printf("please provide valid number");
    }

    return 0;
}