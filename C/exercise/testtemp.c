#include <stdio.h>

int is_integer(float num) {
    return (num == (int)num);
}

int main() {
    float num1 = 42.00;
    float num2 = 42.00;

    printf("num1 is %s\n", is_integer(num1) ? "an integer" : "not an integer");
    printf("num2 is %s\n", is_integer(num2) ? "an integer" : "not an integer");

    return 0;
}
