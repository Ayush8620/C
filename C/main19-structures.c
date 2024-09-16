#include <stdio.h>
#include <string.h>

struct students
{
    char name[53];
    int roll_no;
    float marks;
};

// struct students Harry, Ayush, Ravi; // globle variable

int main()
{
    struct students Harry, Ayush, Ravi; // local variable

    strcpy(Harry.name, "Harry Singh");
    Harry.roll_no = 1;
    Harry.marks = 98;

    strcpy(Ayush.name, "Ayush Yadav");
    Ayush.roll_no = 2;
    Ayush.marks = 92;
    
    strcpy(Ravi.name, "Ravi Kumar");
    Ravi.roll_no = 3;
    Ravi.marks = 84;

    printf("The Detail of student 1 is :- \n Name : %s \n Roll No : %d \n Marks : %f\n", Harry.name, Harry.roll_no, Harry.marks);
    printf("The Detail of student 2 is :- \n Name : %s \n Roll No : %d \n Marks : %f\n", Ayush.name, Ayush.roll_no, Ayush.marks);
    printf("The Detail of student 3 is :- \n Name : %s \n Roll No : %d \n Marks : %f\n", Ravi.name, Ravi.roll_no, Ravi.marks);

    return 0;
}