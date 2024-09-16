#include <stdio.h>

int Fibonacci(int n){

    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
    
}

int main()
{
    int value;
    printf("Enter the Number of which you want Fibonacci series\n");
    scanf("%d", &value);
    printf("%d", Fibonacci(value));
    return 0;
}
