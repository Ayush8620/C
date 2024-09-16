#include <stdio.h>

int main()
{
    int a, marks;
    printf("Enter Your age \n");
    scanf("%d", &a);

    printf("Enter Your marks \n");
    scanf("%d", &marks);

    switch (a)
    {
    case 3:
        printf("Your age is 3 \n");
        switch (marks)
        {
        case 45:
            printf("your marks is 45");
            break;

        default:
            printf("your marks is not 45");
            break;
        }
        break; // if you want to excute defalt and next case then dont use break

    case 13:
        printf("Your age is 13");
        break;

    case 23:
        printf("Your age is 23");
        break;

    default:
        printf("Your age is not 3, 13, 23");
        break;
    }
    return 0;
}
