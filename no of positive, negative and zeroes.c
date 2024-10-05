/* om namah shivay */
#include <stdio.h>
int main()
{
    int no_of_numbers, input_number, positive_numbers=0, negative_numbers=0, zeroes=0, count=0;
    printf("\n \n please input the number of numbers you want to input:- \n \n");
    scanf("%d", &no_of_numbers);
    while(count<no_of_numbers)
    {
        printf("\n \n please input the number:- \n \n");
        scanf("%d", &input_number);
        if(input_number<0)
            negative_numbers=negative_numbers+1;
        else if(input_number>0)
            positive_numbers=positive_numbers+1;
        else if(input_number==0)
            zeroes=zeroes+1;
        count=count+1;
    }
    printf("\n \n the number of positive numbers are :- %d \n \n the number of negative numbers are :- %d \n \n the number of zeroes are :- %d \n \n thank you for using our code", positive_numbers, negative_numbers, zeroes);
    return 0;
}
