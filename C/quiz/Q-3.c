#include <stdio.h>
#include <string.h>

int main()
{
    char name1[58];
    char name2[58];
    char str[67] = " is a friend of ";

    printf("Enter Name1: ");
    gets(name1);
    printf("Enter Name2: ");
    gets(name2);

    char str1[98];
    strcpy(str1, (strcat(name1, str)));

    puts(strcat(str1, name2));

    return 0;
}