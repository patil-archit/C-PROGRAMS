#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_amount, hunnotes, hunremainder, fifnotes, fifremainder, tennotes, tenremainder, fivenotes, fiveremainder, twonotes, tworemainder;

    printf("this program will help you find the least amount of notes requires to make up your total sum \n please input the total amount ");

    scanf("%d", &total_amount);

    hunnotes=total_amount/100;

    hunremainder=total_amount%100;

    fifnotes=hunremainder/50;

    fifremainder=hunremainder%50;

    tennotes=fifremainder/10;

    tenremainder=fifremainder%10;

    fivenotes=tenremainder/5;

    fiveremainder=tenremainder%5;

    twonotes=fiveremainder/2;

    tworemainder=fiveremainder%2;

    printf("\n you will require the following amount of notes of each type");

    printf("\n 100-""%d", hunnotes);

    printf("\n 50-""%d", fifnotes);

    printf("\n 10-""%d", tennotes);

    printf("\n 5-""%d", fivenotes);

    printf("\n 2-""%d", twonotes);

    printf("\n 1-""%d", tworemainder);

    return 0;
}
