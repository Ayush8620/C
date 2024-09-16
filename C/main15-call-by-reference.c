#include <stdio.h>

void func(int *x, int *y){
    int temp = *x;
    *x = (*x + *y);
    *y = (temp - *y);
}

int main()
{
    int a = 4;
    int b = 3;
    printf("a = %d\nb = %d\n", a, b);
    func(&a, &b);
    printf("a = %d\nb = %d\n", a, b);

    return 0;
}