/* om namah shiva */
/* this program will help you calculate simple intrest */

# include <stdio.h>

int main()
{
    printf("this program will you help you calculate simple intrest");

    float r, si, ta, t, p;

    printf("\n please input the principal amount");

    scanf("%d", &p);

    printf("\n please input the rate of intrest");

    scanf("%f", &r);

    printf("\n in how many years will the amount be returned");

    scanf("%f", &t);

    si=p*r*t/100;

    printf("the interest amount is""%f\n", si);

    ta=si+p;

    printf("the total amount to be paid is""%f\n", ta);

    return 0;
}
