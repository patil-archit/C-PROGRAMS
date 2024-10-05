/* om namah shivay */

#include <stdio.h>

int main()
{
    printf("\n \n this program will help you convert colors from RGB format to CMYK format \n \n please input the value of red on the scale from 0 to 255:- \n \n ");

    float red, green, blue, white, cyan, magenta, yellow, black;

    scanf("%f", &red);

    printf("\n \n please input the value of green on the scale from 0 to 255:- \n \n");

    scanf("%f", &green);

    printf("\n \n please input the value of blue on the scale from 0 to 255:- \n \n");

    scanf("%f", &blue);

    if((red>=0 && red<=255) && (green>=0 && green<=255) && (blue>=0 && blue<=255))

        {

            if(red>green && red>blue)

                white=red/255;

            else if(green>red && green>blue)

                white=green/255;

            else if(blue>red && blue>green)

                white=blue/255;

            else if(red==green && red>blue)

                white=red/255;

            else if(red==blue && red>green)

                white=red/255;

            else if(green==blue && blue>red)

                white=blue/255;

            else if(green==red && red==blue)

                white=red/255;

            cyan=(white-(red/255))/white;

            magenta=(white-(green/255))/white;

            yellow=(white-(blue/255))/white;

            black=1-white;

            printf("\n \n the value of cyan is""\n \n %f", cyan);

            printf("\n \n the value of magenta is""\n \n %f", magenta);

            printf("\n \n the value of yellow is""\n \n %f", yellow);

            printf("\n \n the value of black is""\n \n %f", black);

            printf("\n \n  thanks a lot for using our program. \n \n");

        }

    else

        printf("\n \n please input the value in the mentioned limit \n \n");

    return 0;
}
