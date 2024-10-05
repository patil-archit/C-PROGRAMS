/* om namah shivay */
/* let us c chapter 2 exercise h question 3 */

#include <stdio.h>
#include <math.h>

int main()

{
    printf("this program will help you apply herons formula to find the area of a triangle");

    int s1, s2, s3, sp, usqr;

    float area;

    printf("\n please input the length of the first side");

    scanf("%d", &s1);

    printf("\n please input the length of the second side");

    scanf("%d", &s2);

    printf("\n please input the length of the third side");

    scanf("%d", &s3);

    sp=(s1+s2+s3)/2; /* you made an error here of forgetting BODMAS */

    usqr=sp*(sp-s1)*(sp-s2)*(sp-s3);

    area=sqrt(usqr);

    printf("\n the area of the triangle is""\n %f", area);

    return 0;
}
