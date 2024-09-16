#include <stdio.h>

// we asign struct student a nickname of std using typedef (case 2)

typedef struct students
{
    int id ;
    char name;
    float marks ;
} std;


int main()
{
    //case 1
    typedef int integer; // we asign int a nickname of integer using typedef
    integer a = 23 ;
    integer b = 33 ;

    //case 2
    std s1, s2, s3; //add 3 students in struct
    s1.id = 1;
    s2.id = 2;

    //case 3 
    int* x, y; // here only x will become a pointer to overcome this we use typedef as sone below:
    x = &a;
    y = b;
    printf("%x %d\n", x, y) ;


    typedef int* intptr ;
    intptr p1, p2; //here both are become pointers
    p1 = &a ;
    p2 = &b ;
    printf("%x %x\n", p1, p2) ;

    // printf("%d", sizeof(int)) ;
    return 0;
}