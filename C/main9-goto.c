#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
        label:
            printf("inside lable\n");
            goto end;

        printf("01");

        goto label;

        end:
            printf("at end");

    */

    // example
    int i, j, num;

    for (i = 0; i < 8; i++)
    {
        printf("%d i\n", i);

        for (j = 0; j < 8; j++)
        {
            printf("%d j\nenter your age\n", j);
            scanf("%d", &num);
            if (num > 18)
            {
                // break; it help to exit from only one loop 
                goto end; // it help to exit from all the loops
            }
        }
    }

end:
    return 0;
}
