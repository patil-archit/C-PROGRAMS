/* om namah shivay */
#include <stdio.h>
#include <limits.h> /* learnt a new thing */
int main() {
    int no_of_numbers, input_number, biggest_number=INT_MIN, smallest_number=INT_MAX, count=0, range;
    printf("\n \n Please input the number of numbers you want to input:- \n \n");
    scanf("%d", &no_of_numbers);
    while(count<no_of_numbers) {
        printf("\n \n Please input the number:- \n \n");
        scanf("%d", &input_number);
        if(input_number > biggest_number) {
            biggest_number = input_number;
        }
        if(input_number < smallest_number) {
            smallest_number = input_number;
        }
        count++;
    }
    range = biggest_number - smallest_number;
    printf("\n \n The range is %d", range);
    return 0;
}

