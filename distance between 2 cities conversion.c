/* om naham shivay */
/* this program is a part of the let us c book chapter 1 exercise f question 2 */

#include <stdio.h>

int main()

{
    float dis_in_km, dis_in_m, dis_in_in, dis_in_feet, dis_in_cm;

    printf("this program will help you convert the unit of distance input by you of the distance between two cities");

    printf("\n please input the distance between the two cities in kilometer");

    scanf("%f",& dis_in_km);

    dis_in_m=dis_in_km*1000;

    dis_in_cm=dis_in_m*100;

    dis_in_feet=dis_in_km*3280.84;

    dis_in_in=dis_in_feet*12;

    printf("\n the distance in meters is""\n %f", dis_in_m);

    printf("\n the distance in centimeters is""\n %f", dis_in_cm);

    printf("\n the distance in feet is""\n %f", dis_in_feet);

    printf("\n the distance in inches is""\n %f", dis_in_in);
}
