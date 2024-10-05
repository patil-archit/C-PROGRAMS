/* om namah shivay */
/* this program is a part of let us c book chapter one exercise f question 1 */

#include <stdio.h>

int main()

{
    float salary, dearnessallowance, livingcost, grossincome;

    printf("this program will help ramesh calculate his gross salary");

    printf("\n please input your salary ramesh");

    scanf("%f", &salary);

    dearnessallowance=40*salary/100;

    livingcost=20*salary/100;

    grossincome=livingcost+dearnessallowance+salary;

    printf("\n the gross income of ramesh is""%f", grossincome);

    return 0;


}
