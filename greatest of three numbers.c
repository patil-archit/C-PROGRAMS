/* om namah shivay */

#include <stdio.h>

int main()
{
    float number_1, number_2, number_3;

    printf("\n \n please input the first number:- \n \n");

    scanf("%f", &number_1);

    printf("\n \n please input the second number:- \n \n");

    scanf("%f", &number_2);

    printf("\n \n please input the third number:- \n \n");

    scanf("%f", &number_3);

    ((number_1>number_2 && number_1>number_3)?printf("\n \n number 1 is the biggest \n \n"):((number_2>number_1 && number_2>number_3)?printf("\n \n number 2 is the biggest \n \n"):(number_3>number_1 && number_3>number_2)?printf("\n \n number 3 is the biggest \n \n"):(number_1==number_2 && number_1>number_3)?printf("\n \n number 1 and number 2 are the biggest"):(number_1==number_3 && number_1>number_2)?printf("\n \n number 1 and number 3 are the biggest \n \n"):(number_3==number_2 && number_2>number_1)?printf("\n \n number 2 and number 3 are the biggest \n \n"):(number_1==number_2 && number_1==number_3)?printf("\n \n all numbers are equall \n \n"):printf("\n \n no such case exists bruhv \n \n")));


    return 0;
}
