/* om namah shivay */

#include <stdio.h>

int main()
{
    printf("\n \n  this program will help you find the factorial of the number that you enter. \n \n please input the number you want to find the factorial of:- \n \n");

    int input_number, factorial=1;

    scanf("%d", &input_number);

    while(input_number>1)

    {
        factorial=factorial*(input_number);

        input_number=input_number-1;

    }

    printf("\n \n %d is the factorial \n \n", factorial);

    return 0;
}
