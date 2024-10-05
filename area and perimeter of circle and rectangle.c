/* om namah shivay */
/* let us c chapter 1 exercise f question 5 */

#include <stdio.h>

int main()

{
    printf("\n \n this program will help you calculate the area and perimeter for the dimensions of rectangle and circle that you have input");

    printf("\n \n please input the length of the rectangle:- ");

    float length, breadth, radius, pm_rect, ar_rect, pm_circle, ar_circle;

    scanf("%f", &length);

    printf("\n \n please input the breadth of the rectangle:- ");

    scanf("%f", &breadth);

    printf("\n\n please input the radius of the circle:- ");

    scanf("%f", &radius);

    pm_rect=2*(length+breadth);

    ar_rect=length*breadth;

    pm_circle=2*3.14*radius;

    ar_circle=3.14*radius*radius;

    printf("\n \n the perimeter of the rectangle is:- ""\n \n %f", pm_rect);

    printf("\n \n the area of the rectangle is""\n \n %f", ar_rect);

    printf("\n \n the perimeter of the circle is""\n \n %f", pm_circle);

    printf("\n \n the area of the circle is""\n \n %f", ar_circle); /* why does putting %d give so diffrent answers */

    if(ar_rect>pm_rect)

        printf("\n \n the area is greater than the perimeter \n \n");

    else if(pm_rect>ar_rect)

        printf("\n \n the perimeter is greater than the area \n \n");

    else

        printf("\n \n both permeter and area are the same \n \n");

    return 0;
}
