/* om namah shivay */

#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, x3, y3, atan_n_1, atan_d_1, atan_n_2, atan_d_2, atan_1_1, atan_2_1, atan_1_2, atan_2_2;

    printf("\n \n this program will help you find out whether the three coordinates you input lie on a straight line or not");

    printf("\n \n please input the first abscissa:- ");

    scanf("%f", &x1);

    printf("\n \n please input the first ordinate:- ");

    scanf("%f", &y1);

    printf("\n \n please input the second abscissa:- ");

    scanf("%f", &x2);

    printf("\n \n please input the second ordinate:- ");

    scanf("%f", &y2);

    printf("\n \n please input the third abscissa:- ");

    scanf("%f", &x3);

    printf("\n \n please input the third ordinate:- ");

    scanf("%f", &y3);

    atan_n_1=y3-y2;

    atan_d_1=x3-x2;

    atan_n_2=y2-y1;

    atan_d_2=x2-x1;

    atan_1_1=atan_n_1/atan_d_1;

    atan_2_1=atan_n_2/atan_d_2;

    atan_1_2=atan(atan_1_1);

    atan_2_2=atan(atan_2_1);

    if(atan_1_2==atan_2_2)

        printf("\n \n  they lie on the same line  \n \n");

    else

        printf("\n \n they don't lie on the same line \n \n");

    return 0;
}
