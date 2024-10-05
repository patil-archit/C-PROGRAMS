/* om namah shivay */
/* let us c chapter 2 exercise h question 7*/

#include <stdio.h>
#include <math.h>

int main()
{
    float degrees, radians, sine, cose, tane, cot, cosec, sec;

    printf(" this program will give you the value of all trignometric ratios for the angle you will give in degrees \n please input the angle in degrees");

    scanf("%f", &degrees);

    radians=degrees*3.14/180;

    sine= sin(radians);

    cose= cos(radians);

    tane= tan(radians);

    cot=1/tane;

    cosec=1/sine;

    sec=1/cose;

    printf("\n the trignometric ratios are");

    printf("\n sin=""%f", sine);

    printf("\n cos=""%f", cose);

    printf("\n tan=""%f", tane);

    printf("\n cosec=""%f", cosec);

    printf("\n sec=""%f", sec);

    printf("\n cot=""%f", cot);

    return 0;
}
