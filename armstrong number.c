/* om namah shivay */

#include <stdio.h>

#include <math.h>

int main()
{
    int number, first_digit, two_digit_number, second_digit, third_digit, armstrong_number, first_digit_power, second_digit_power, third_digit_power;

    printf("\n \n this program gives the list of all armstrong number between 1 to 500:- \n \n");

    while(number<501)

    {

        first_digit=number%10;

        two_digit_number=number/10;

        second_digit=two_digit_number%10;

        third_digit=number/100;

        first_digit_power=pow(first_digit, 3.0);

        second_digit_power=pow(second_digit, 3.0);

        third_digit_power=pow(third_digit, 3.0);

        armstrong_number=first_digit_power+second_digit_power+third_digit_power;

        if(armstrong_number==number)

        {
            printf("\n %d is a armstrong number \n ", number);
        }

        number=number+1;

    }

    return 0;
}
