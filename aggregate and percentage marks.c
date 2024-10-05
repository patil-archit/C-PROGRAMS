/* om namah shivay */
/* this program  is a part of the let u c book chapter 1 exercise f question 3 */

#include <stdio.h>

int main()

{
    float phy, chem, math, eng, coding, agg, percentage;

    printf("this program will take the input of all your subject marks and find the aggregate and percentage marks");

    printf("\n please input your physics marks out of hundred");

    scanf("\n %f", &phy);

    printf("\n please input your chemistry marks out of hundred");

    scanf(" \n%f", &chem);

    printf("\n please input your mathematic marks out of hundred");

    scanf("\n %f", &math);

    printf("\n please input your english marks out of hundred");

    scanf("\n %f", &eng);

    printf("\n please input your conding marks out of hundred");

    scanf("\n %f", &coding);

    agg=phy+chem+math+eng+coding;

    printf("\n the aggregate marks are""\n %f", agg);

    percentage=agg/5;

    printf("\n your percentage is""\n %f", percentage);

    return 1;
}
