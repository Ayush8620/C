#include <stdio.h>

/* 
if we do operatoin between int and int we get int
if we do operatoin between int and float we get float
if we do operatoin between float and float we get float
*/

/* typecast syntax--
(type) value;
*/

//example

int main(int argc, char const *argv[])
{
    // int a = 3;
    float b = 54.33;

    printf("the value is %d", (int) b); //convert float into int
    return 0;
}
