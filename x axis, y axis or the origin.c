/* om namah shivay */

#include <stdio.h>

int main()
{
    float x_coordinate, y_coordinate;

    printf("\n \n this program will help you find out whether the point you have input lies on the x axis, y axis or the origin");

    printf("\n \n please input the abscissa of the point:- \n \n");

    scanf("%f", &x_coordinate);

    printf("\n \n please input the ordinate of the point:- \n \n");

    scanf("%f", &y_coordinate);

    if(x_coordinate==0 && y_coordinate!=0)

        printf("\n \n the point lies on y axis \n \n");

    else if(x_coordinate!=0 && y_coordinate==0)

        printf("\n \n the point lies on x axis \n \n");

    else if(x_coordinate==0 && y_coordinate==0)

        printf("\n \n the point lies on origin \n \n");

    else

        printf("\n \n  the point does not lie on the x axis, y axis or the origin \n \n");

    return 0;
}
