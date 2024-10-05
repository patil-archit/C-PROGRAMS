/* om namah shivay */

#include <stdio.h>
#include <math.h>

int main()
{
    float weight, height, height_2, BMI;

    printf("\n \n this program will help you calculate your BMI. \n \n please input your weight in KG:- \n \n");

    scanf("%f", &weight);

    printf("\n \n please input your height in meters:- \n \n");

    scanf("%f", &height);

    height_2=pow(height, 2.0);

    BMI=weight/height_2;

    if(BMI<15)

        printf("\n \n you are under the Starvation category and you BMI is:- ""\n \n %f", BMI);

    else if(BMI>=15.1 && BMI<=17.5)

        printf("\n \n you are under the Anorexic category and you BMI is:- ""\n \n %f", BMI);

    else if(BMI>=17.6 && BMI<=18.5)

        printf("\n \n you are under the Underweight category and you BMI is:- ""\n \n %f", BMI);

    else if(BMI>=18.6 && BMI<=24.9)

        printf("\n \n you are under the Ideal category and you BMI is:- ""\n \n %f", BMI);

    else if(BMI>=25 && BMI<=29.9)

        printf("\n \n you are under the Overweight category and you BMI is:- ""\n \n %f", BMI);

    else if(BMI>=30 && BMI<=39.9)

        printf("\n \n you are under the Obese category and you BMI is:- ""\n \n %f", BMI);

    else if(BMI>=40)

        printf("\n \n you are under the Morbidly Obese category and you BMI is:- ""\n \n %f", BMI);

    return 0;
}
