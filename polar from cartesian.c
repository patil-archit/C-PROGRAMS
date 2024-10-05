/*om namah shivay*/
/* let us c chapter 2 exercise h question 4*/

#include <stdio.h>
#include <math.h>

int main()
{

    float x, y, polar1, polar2, oua, sumofsq;

    printf("this program will convert your cartesian coordinates into polar coordinates");

    printf("\n please input the absicca");

    scanf("%f", &x);

    printf("\n please input the ordinate ");

    scanf("%f", &y);

    sumofsq=(x*x+y*y);

    polar1=sqrt(sumofsq);

    oua=y/x;

    polar2=atan(oua);

    printf("\n the polar coordinates are""\n %f", polar1);

    printf(",""%f", polar2);

    return 0;
}

