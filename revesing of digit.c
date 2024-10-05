/* om namah shivay */
/* let us c chapter 2 exercise h question 2*/

#include <stdio.h>

int main()

{
    int number, nd1, nd1m, nd2bd1, nd2bd2, nd2, nd2m, nd3bd1, nd3bd2, nd3, nd3m, nd4bd1, nd4bd2, nd4, nd4m, nd5bd1, nd5bd2, nd5, newnumber;

    printf("this program will help you reverse the digits of any five digit number you input \n \n please input the five digit number:- ");

    scanf("%d", &number);

    if(number >= 9999 && number <= 99999)

         {

            nd1=number%10;

            nd2bd1=number%100;

            nd2bd2=nd2bd1-nd1;

            nd2=nd2bd2/10;

            nd3bd1=number%1000;

            nd3bd2=nd3bd1-nd2bd1;

            nd3=nd3bd2/100;

            nd4bd1=number%10000;

            nd4bd2=nd4bd1-nd3bd1;

            nd4=nd4bd2/1000;

            nd5bd1=number%100000;

            nd5bd2=nd5bd1-nd4bd1;

            nd5=nd5bd2/10000;

            nd1m=nd1*10000;

            nd2m=nd2*1000;

            nd3m=nd3*100;

            nd4m=nd4*10;

            newnumber=nd1m+nd2m+nd3m+nd4m+nd5;

            printf("\n \n the new number is""\n%d", newnumber);

            if(newnumber==number)

                printf("\n \n the number is same as that original number \n \n it is a palindrome \n \n ");

            else

                printf("\n \n this number is not same as the original number \n \n");
         }

    else

            printf("number you input is not in limits");

    return 0;
}
