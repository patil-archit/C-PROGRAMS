/* om namah shivay */

#include <stdio.h>

int main()
{
    int input_number_1, input_number_2, power=1;

    printf("\n \n this program will help you find the power of an number. \n \n please input the number you want to find the power of :- \n \n");

    scanf("%d", &input_number_1);

    printf("\n \n please input the number you want to find times of power of:- \n \n");

    scanf("%d", &input_number_2);

    while(input_number_2+1>1)

    {
        power=power*input_number_1;

        input_number_2=input_number_2-1;
    }

    printf("\n \n the power is :- \n \n %d", power);

    return 0;
}
