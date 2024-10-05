#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input_character;

    printf("\n \n this program will help you find out whether the character you input is lower case or not. \n \n please input the character. \n \n");

    scanf("%c", &input_character);

    ((input_character<123 && input_character>96)?printf("\n \n %c is a smallcase \n \n", input_character):printf("\n \n %c is not a small case \n \n", input_character));

    return 0;
}
