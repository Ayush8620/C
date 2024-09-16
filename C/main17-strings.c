#include <stdio.h>

int main()
{
    char a = {'h','e','l','l','o','\0'}; // '\0'is a null eleminator OR neche wala me by default hota hai
    char b = "hello";

    char str[67] ;

    gets(str); //takes input of string from user, you can use scanf but it cannot take blank spaces
    // scanf("%s", &str);

    printf("%s\n", str);
    puts(str);//print str
    
    return 0;
}