/* om namah shivay */

#include <stdio.h>

int main()
{
    char input_character;

    printf("\n \n this program will help you find out whether the character you input is special case or not. \n \n please input the character. \n \n");

    scanf("%c", &input_character);

    (((input_character<=47 && input_character>=0) || (input_character<=64 && input_character>=58) || (input_character<=96 && input_character>=91) || (input_character<=127 && input_character>=123))?printf("\n \n %c is a special character \n \n", input_character):printf("\n \n %c is not a special character\n \n", input_character));

    return 0;
}
