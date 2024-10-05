/* om namah shivay*/
/* let us c chapter 2 exercise h question 8*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first, second, empty_daba;

    printf("this program will help you interchange the value of two data input by you \n please input the first integer followed by pressing enter and the second data");

    scanf("%d%d", &first, &second);

    empty_daba=first;

    first=second;

    second=empty_daba;

    printf("\n the first number now is""\n %d", first);

    printf("\n the second number now is""\n %d", second);

    return 0;
}
