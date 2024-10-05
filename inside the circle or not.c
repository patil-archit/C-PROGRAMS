/* om namah shivay */

#include <stdio.h>
#include <math.h>

int main()
{
    float center_x, center_y, radius, point_x, point_y, x_r_2, y_r_2, x_d, y_d, in_sqrt, distance;

    printf("\n \n this program will help you find out whether the coordinates you have input is inside the circle or not for the circle that you have input");

    printf("\n \n please input the abscissa of the center of the circle:- \n \n");

    scanf("%f", &center_x);

    printf("\n \n please input the ordinate of the center of the circle:- \n \n");

    scanf("%f", &center_y);

    printf("\n \n please input the radius of the circle:- \n \n");

    scanf("%f", &radius);

    printf("\n \n please input the abscissa of the point outside the circle:- \n \n");

    scanf("%f", &point_x);

    printf("\n \n please input the ordinate of the point outside the circle:- \n \n");

    scanf("%f", &point_y);

    x_d=point_x-center_x;

    y_d=point_y-center_y;

    x_r_2=pow(x_d, 2.0);

    y_r_2=pow(y_d, 2.0);

    in_sqrt=x_r_2+y_r_2;

    distance=sqrt(in_sqrt);

    if(distance>radius)

        printf("\n \n the point is outside the circle \n \n");

    else if(radius==distance)

        printf("\n \n the point lies on the circle \n \n");

    else

        printf("\n \n the point is inside the circle \n \n");

    return 0;
}
