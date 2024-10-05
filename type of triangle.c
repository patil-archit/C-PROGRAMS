/* om namah shivay */

#include <stdio.h>
#include <math.h>

int main()
{
    float side_1, side_2, side_3, pow_1, pow_2, pow_3, pow_1_2, pow_2_3, pow_1_3;

    printf("\n \n this program will help you find out what type of a triangle you have \n \n please input the first side:- \n \n");

    scanf("%f", &side_1);

    printf("\n \n please input the second side:- \n \n");

    scanf("%f", &side_2);

    printf("\n \n please input the third side:- \n \n");

    scanf("%f", &side_3);

    pow_1=pow(side_1, 2.0);

    pow_2=pow(side_2, 2.0);

    pow_3=pow(side_3, 2.0);

    pow_1_2=pow_1+pow_2;

    pow_1_3=pow_1+pow_3;

    pow_2_3=pow_2+pow_3;

    if(((side_1+side_2)>side_3) &&((side_2+side_3)>side_1) && ((side_1+side_3)>side_2))

        {

            if((side_1==side_2 && pow_1_2!=pow_3) || (side_1==side_3 && pow_1_3!=pow_2) || (side_3==side_2 && pow_2_3!=pow_1))

                printf("\n \n it an isosceles triangle but not a right angled triangle \n \n");

            else if((side_1==side_2 && pow_1_2==pow_3) || (side_1==side_3 && pow_1_3==pow_2) || (side_3==side_2 && pow_2_3==pow_1))

                printf("\n \n it a right isosceles triangle \n \n");

            else if((side_1!=side_2 && side_2!=side_3 && side_1!=side_3) && ((pow_1_2==pow_3) || (pow_1_3==pow_2) || (pow_2_3==pow_1)))

                printf("\n \n it a right scalene triangle \n \n");

            else if((side_1!=side_2 && side_2!=side_3 && side_1!=side_3) && ((pow_1_2!=pow_3) || (pow_1_3!=pow_2) || (pow_2_3!=pow_1)))

                printf("\n \n it a scalene triangle but not a right angles triangle \n \n");

            else if(side_1==side_2 && side_2==side_3 && side_1==side_3)

                printf("\n \n it is an equilateral triangle \n \n");
        }

    else if((((side_1+side_2)==side_3) &&((side_2+side_3)>side_1) && ((side_1+side_3)>side_2)) || (((side_1+side_2)>side_3) &&((side_2+side_3)==side_1) && ((side_1+side_3)>side_2)) || (((side_1+side_2)>side_3) &&((side_2+side_3)>side_1) && ((side_1+side_3)==side_2)))


        printf("\n \n it is valid triangle, but in the form of a straight line segment \n  \n");

    else

        printf("\n \n it is not valid triangle \n  \n");

    return 0;
}
