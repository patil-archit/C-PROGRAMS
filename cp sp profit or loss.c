#include <stdio.h>

int main()
{
    printf("this program will help you find out if you made a profit or loss based on cost price and selling price");

    int cost_price, selling_price, profit, loss;

    printf("\n please input your cost price");

    scanf("%d", &cost_price);

    printf("\n please input your selling price");

    scanf("%d", &selling_price);

    if(selling_price>cost_price)

    {

        profit=selling_price-cost_price;

        printf("\n you have made a profit of ""%d", profit);

    }

    else if(cost_price>selling_price)

    {

        loss=cost_price-selling_price;

       printf("\n you have made a loss of""%d", loss);

    }
    else

        printf("you have made no profit nor no loss");

    return 0;
}
