/* om naham shivay */
/* let us c chapter 1 exercise f question 4 */

#include <stdio.h>

int main()

{
    printf("this program will help you convert the temperature from fahrenheit to centigrade");

    printf("\n please input the temperature in fahrenheit");

    float fahrenheit, centigrade, ran;

    scanf("%f", &fahrenheit);

    ran=fahrenheit-32;

    centigrade=ran*5/9;

    printf("\n the temperature in centigrade is");

    printf("\n %f", centigrade);

    return 0;
}
