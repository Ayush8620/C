// kms to miles, kilo * 0.62137 = mile
// inches to foot, inches * 0.0833333 = foot
// cms to inches, cm * 0.39370 = inches
// pound to kgs, pound * 0.454 = kg
// inches to meters, inches * 0.0254 = meters

#include <stdio.h>

float convert(float value, int opt)
{

    float sol;
    switch (opt)
    {
    case 1:
        return sol = value * 0.62137;
        break;
    case 2:
        return sol = value * 0.0833333;
        break;
    case 3:
        return sol = value * 0.39370;
        break;
    case 4:
        return sol = value * 0.454;
        break;
    case 5:
        return sol = value * 0.0254;
        break;

    default:
        return sol = -1;
        break;
    }
}

int main()
{
    int opt;
    float value;
    const char *options[] = {"kms to miles", "inches to foot", "cms to inches", "pound to kgs", "inches to meters"};

    while (1)
    {

        printf("Select The option of Convertions given below OR press 0 to exit:-\n");

        for (int i = 0; i < 5; i++)
        {
            printf("%d. %s\n", (i + 1), options[i]);
        }

        printf("\nYour input = ");
        scanf("%d", &opt);
        if (opt == 0)
        {
            printf("Quiting Program.....");
            break;
        }
        else if (opt < 1 || opt > 5)
        {
            printf("Please Enter the the Correct Option Given above \n");
            continue;
        }

        printf("You choose %s convertion, please Enter the value to convert :- ", options[opt - 1]);
        scanf("%f", &value);
        printf("Your Ans is %f\n\n", convert(value, opt));
    }

    return 0;
}
