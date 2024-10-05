/* om namah shivay */

#include <stdio.h>

int main()
{
    int input_number, modulated_quantity;

    printf("this program will help you find out if the number you input is odd or even \n please input your number");

    scanf("%d", &input_number);

    modulated_quantity=input_number%2;

    if(modulated_quantity==1)

        printf("\n the number you have input is odd");

    else if(modulated_quantity==0)

        printf("\n the number you have input is even");


    return 0;
}
