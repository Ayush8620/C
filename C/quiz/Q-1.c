#include <stdio.h>

int main()
{
    char input;

    printf("In which subjects your are passed please select:- \n b) Maths \n a) Science \n c) Both Maths And Science \n d) None Of these \n Ans) ");
    scanf("%s", &input);

    if (input == 'a')
    {
        printf("Your Reward is 15Rs");
    }
    else if (input == 'b')
    {
        printf("Your Reward is 15Rs");
    }
    else if (input == 'c')
    {
        printf("Your Reward is 45Rs");
    }
    else
    {
        printf("You got nothing");
    }

    return 0;
}
