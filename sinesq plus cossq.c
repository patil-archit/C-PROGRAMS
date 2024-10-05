/* om namah shivay */

#include <stdio.h>
#include <math.h>

int main()
{
    float angle, angle_in_radians, sine, cosine, sinsq, cossq, sum;

    printf("\n \n please input the angle in degrees:- \n \n ");

    scanf("%f", &angle);

    angle_in_radians=3.14159265358979323846*angle/180;

    sine=sin(angle_in_radians);

    cosine=cos(angle_in_radians);

    sinsq=pow(sine, 2.0);

    cossq=pow(cosine, 2.0);

    sum=sinsq+cossq;

    (sum==1?printf("\n \n the sum of square is one \n \n"):printf("\n \n the sum of squares is not one \n \n"));

    return 0;
}
