/* om namah shivay */

#include <stdio.h>

int main()
{
    printf("\n \n this program will help you find out the type of character that you have input \n \n please input the character:- \n \n");

    char input_character;

    scanf("%c", &input_character);

    if((0<=input_character && input_character<=47) || (58<=input_character && input_character<=64) || (91<=input_character && input_character<=96) || (123<=input_character && input_character<=127))

        printf("\n \n it is a special case character \n \n");

    else if(48<=input_character && input_character<=57)

        printf("\n \n it is a number \n \n");

    else if(97<=input_character && input_character<=122)

        printf("\n \n it is a small case alphabet \n \n");

    else if(65<=input_character && input_character<=90)

        printf("\n \n it is capital alphabet \n \n");

    else

        printf("\n \n please just input one character \n \n");

    return 0;
}
