#include <stdio.h>

int Fibonacci(int n)
{
    int i, c;
    if (n == 0 || n == 1)
    {
        return n;
    }
    int a = 0;
    int b = 1;
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    int n;
    printf("Enter the Number of which you want Fibonacci series\n");
    scanf("%d", &n);
    printf("%d",Fibonacci(n));
    return 0;
}
