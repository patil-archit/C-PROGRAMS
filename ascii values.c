/* om namah shivay */

#include <stdio.h>

int main()
{
    int ascii_value=0;

    printf("\n \n this program will give you the ascii table:- \n \n");

    while(ascii_value<256)

    {
        printf("ASCII Value: %d | Symbol: %c\n", ascii_value, ascii_value);

        ascii_value=ascii_value+1;

    }

    return 0;
}
