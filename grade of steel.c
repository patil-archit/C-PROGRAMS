/* om namah shivay */

#include <stdio.h>

int main()
{
    printf("\n \n this program will help you find out what grade of steel you have. \n \n please input the hardness of the steel:- \n \n");

    float hardness, carbon_content, tensile_strength;

    scanf("%f", &hardness);

    printf("\n \n please input the carbon content of the steel:- \n \n");

    scanf("%f", &carbon_content);

    printf("\n \n please input the tensile strength of the steel:- \n \n");

    scanf("%f", &tensile_strength);

    if(hardness>50 && carbon_content<0.7 && tensile_strength>5600)

        printf("\n \n the steel is of grade 10 \n \n");

    else if(hardness>50 && carbon_content<0.7 && tensile_strength<5600)

        printf("\n \n the steel is of grade 9 \n \n");

    else if(hardness<50 && carbon_content<0.7 && tensile_strength>5600)

        printf("\n \n the steel is of grade 8 \n \n");

    else if(hardness>50 && carbon_content>0.7 && tensile_strength>5600)

        printf("\n \n the steel is of grade 7 \n \n");

    else if(hardness>50 || carbon_content<0.7 || tensile_strength>5600)

        printf("\n \n the steel is of grade 6 \n \n");

    else

        printf("\n \n the steel is of grade 5 \n \n");

    return 0;
}
