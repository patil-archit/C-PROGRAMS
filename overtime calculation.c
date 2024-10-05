#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n \n this program will help you calculate the overtime amount to be paid to 10 different employees");

    int person, overtime_hours, overtime_pay;

    person=1; /* if not mentioned this, it takes default value to be 0 */

    while(person<=10)

    {
        printf("\n \n please enter the amount of overtime hours worked by this employee:- \n \n");

        scanf("%d", &overtime_hours);

        overtime_pay=overtime_hours*12;

        printf("\n \n %d is the amount to be paid to this employee \n \n", overtime_pay);

        person=person+1;
    }

    return 0;
}
