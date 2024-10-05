/*om namah shivay*/
/* let us c chapter 3 exercise c questions 3 */

#include <stdio.h>

int main()
{
    int year, remainder, remainder_1;

    printf("\n \n this program will help you find out whether the year you input is a leap year or not \n \n please input the the year:- \n \n");

    scanf("%d", &year);

    remainder=year%4;

    remainder_1=year%400;

    if(remainder==0 && remainder_1==0)

        printf("\n \n the year is a leap year\n \n");

    else

        printf("\n \n the year is not a leap year\n \n");

    return 0;
}
