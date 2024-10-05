/* om namah shivay */
#include <stdio.h>
int main()
{
    int no_of_numbers, input_number, biggest_number, smallest_number, count=0, range;
    printf("\n \n please input the number of numbers you want to input:- \n \n");
    scanf("%d", &no_of_numbers);
    while(count<no_of_numbers)
    {
        printf("\n \n please input the number:- \n \n");
        scanf("%d", &input_number);
        if(input_number>=biggest_number)
        {
            biggest_number=input_number;
            count=count+1;
        }
        else
        {
            smallest_number=input_number;
            count=count+1;
        }
    }
    range=biggest_number-smallest_number;
    printf("\n \n the range is %d", range);
    return 0;
}
