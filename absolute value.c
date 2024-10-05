/* om namah shivay */

#include <stdio.h>

int main()
{
    float input_number, absolute_number;

    printf("\n \n please input the number you want to find the absolute number for:- ");

    scanf("%f", &input_number);

    if(input_number==0)

        printf("\n \n the absolute number for your number is:- 0");

    else if(input_number>0)

        printf("\n \n the absolute number for your number is :- ""%f", input_number);

    else if(input_number<0)

    {
        absolute_number=input_number*-1;

        printf("\n \n the absolute number for your number is :- ""%f", absolute_number);
    }

    return 0;
}
