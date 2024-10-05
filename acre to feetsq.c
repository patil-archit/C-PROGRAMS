/* om namah shivay */

#include <stdio.h>

int main()
{
    int choice;

    float acres, feetsq;

    printf("\n \n please input one if you want to covert acres to feet square and two if you want to convert feet square to acres:- \n \n");

    scanf("%d", &choice);

    if(choice==1)

         {

            printf("\n \n this program will help you convert acres to feet. \n \n please input the area in acres:- \n  \n");

            scanf("%f", &acres);

            feetsq=acres*43560;

            printf("\n \n the area in feet squares is %f \n \n", feetsq);

         }

    else if(choice==2)

        {
            printf("\n \n this program will help you convert feet square to acres. \n \n please input the area in feet square:- \n  \n");

            scanf("%f", &feetsq);

            acres=feetsq/43560;

            printf("\n \n the area in acres is %f \n \n", acres);
        }

    else

        printf("\n \n please choose between 1 and 2 only \n \n");

            return 0;
}
