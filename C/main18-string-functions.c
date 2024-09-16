#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "harry";
    char s2[] = "ayush";

    printf("The stramp for s1 and s2 is %d\n", strcmp(s1, s2)); //function 5

    char s3[56];

    // puts(strcat(s1, s2)); function 1

    // puts(strlen(s2)); wrong

    printf("The length of s1 is %d\n", strlen(s1)); // function 2
    printf("The length of s2 is %d\n", strlen(s2));

    printf("The reverse of s1 is : "); // function 3
    puts(strrev(s1));
    printf("The reverse of s2 is : ");
    puts(strrev(s2));

    strcpy(s3, strcat(s2, s1)); // function 4
    puts(s3);


    return 0;
}