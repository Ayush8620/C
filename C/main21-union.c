#include <stdio.h>

//union is similar to struct in structure we asign differrnt memory locations for different variales but in union we asign same mermory locatoin for different variables because in union we use one variable at one time if we use all two or more variable at once we get garbage value in others

union employee
{
    int id ;
    char name[53];
    char fav_char ;
};


int main()
{
    union employee e1, e2;
    e1.id = 21;
    e1.fav_char = 'b';
    e2.id = 19;

    printf("%d\n", e1.id); // here we get a garbage value because fav_char use memory location of id in e1
    printf("%c\n", e1.fav_char);
    printf("%d\n", e2.id);
    return 0;
}