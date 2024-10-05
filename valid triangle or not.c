#include <stdio.h>

int main()
{
    float angle_1, angle_2, angle_3, sum;

    printf("\n \n please input the first angle between two side:- ");

    scanf("%f", &angle_1);

    printf("\n \n please input the second angle between two side:- ");

    scanf("%f", &angle_2);

    printf("\n \n please input the third angle between two side:- ");

    scanf("%f", &angle_3);

    sum=angle_1+angle_2+angle_3;

    if(angle_1 > 0 && angle_2>0 && angle_3)

    {
        if(sum==180)

            printf(" \n \n it is a correct triangle \n \n");

        else

            printf(" \n \n it is not a triangle \n \n");
    }

    else

        printf(" \n \n please input positive angles only \n \n");

    return 0;
}
