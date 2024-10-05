/* om namah shivay */

#include <stdio.h>

int main()
{
    float side_1, side_2, side_3;

    printf("\n \n this program will help you find out whether the triangle is valid or not \n \n please input the first side:- \n \n");

    scanf("%f", &side_1);

    printf("\n \n please input the second side:- \n \n");

    scanf("%f", &side_2);

    printf("\n \n please input the third side:- \n \n");

    scanf("%f", &side_3);

    if(((side_1+side_2)>side_3) &&((side_2+side_3)>side_1) && ((side_1+side_3)>side_2))

        printf("\n \n it is valid triangle \n  \n");

    else if((((side_1+side_2)==side_3) &&((side_2+side_3)>side_1) && ((side_1+side_3)>side_2)) || (((side_1+side_2)>side_3) &&((side_2+side_3)==side_1) && ((side_1+side_3)>side_2)) || (((side_1+side_2)>side_3) &&((side_2+side_3)>side_1) && ((side_1+side_3)==side_2)))


        printf("\n \n it is valid triangle, but in the form of a straight line segment \n  \n");

    else

        printf("\n \n it is not valid triangle \n  \n");

    return 0;
}
