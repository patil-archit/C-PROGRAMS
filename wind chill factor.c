/* om namah shivay*/
/* let us c chapter 2 exercise h question f*/

#include <stdio.h>
#include <math.h>

int main()
{
    float temperature, velocity, velocity_power, wind_chill_factor;

    printf(" this program will help you find the wind chill factor \n please input the temperature");

    scanf("%f", &temperature);

    printf(" \n please input the wind velocity");

    scanf("%f", &velocity);

    velocity_power=pow(velocity,0.16);

    wind_chill_factor=((35.74)+(0.6215*temperature)+(((0.4275*temperature)-35.75)*velocity_power));

    printf("\n the wind chill temperature is""\n %f", wind_chill_factor);

    return 0;
}
