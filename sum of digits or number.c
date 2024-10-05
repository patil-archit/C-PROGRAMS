/* om namah shivay */
/* let us c chapter 2 exercise h question 1*/

#include <stdio.h>

int main()

{
    int number, nd1, nd2bd1, nd2bd2, nd2, nd3bd1, nd3bd2, nd3, nd4bd1, nd4bd2, nd4, nd5bd1, nd5bd2, nd5, sum;

    printf("this program will help you find the sum of digits of any five digit number you input \n please input the five digit number");

    scanf("%d", &number);

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

    sum=nd1+nd2+nd3+nd4+nd5;

    printf("%d", sum);

    return 0;
}
