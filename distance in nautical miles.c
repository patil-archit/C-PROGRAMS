/* om namah shivay*/
/* let us c chapter 2 exercise h question 5*/


#include <stdio.h>
#include <math.h>

int main()
{
    float L1, L2, G1, G2, l1, l2, g1, g2, sinl1, sinl2, cosl1, cosl2, g2g1, cosg2g1, inwholecos, wholecos, d;

    printf("this program will help you find the distance in nautical miles between two places. \n it is a must that you must have their latitude and longitude");

    printf("\n please input the first latitude L1");

    scanf("%f", &L1);

    printf("\n please input the second latitude L2");

    scanf("%f", &L2);

    printf("\n please input the first longitude G1");

    scanf("%f", &G1);

    printf("\n please input the second longitude G2");

    scanf("%f", &G2);

    l1=L1*3.14/180;

    l2=L2*3.14/180;

    g1=G1*3.14/180;

    g2=G2*3.14/180;

    sinl1=sin(l1);

    sinl2=sin(l2);

    cosl1=cos(g1);

    cosl2=cos(g2);

    g2g1=g2-g1;

    cosg2g1=cos(g2g1);

    inwholecos=(sinl1*sinl2)+(cosl1*cosl2*cosg2g1);

    wholecos=acos(inwholecos);

    d=3963*wholecos;

    printf("\n the distance in nautical miles is ""\n %f", d);

    return 0;
}
