//Pizza ordering program

#include <stdio.h>

#define PIZZA_COST 9.99
#define DELIVERY_COST 2.99

int main(void)
{
    int very_hungry = 0, pizza_qauntity = 6;
    float total_cost;

    if (very_hungry)
    {
        printf("We're ordering %d pizzas. \n", pizza_qauntity);
        total_cost = PIZZA_COST * pizza_qauntity;
    }
    else
    {
        printf("We're ordering one pizza. \n");
        total_cost = PIZZA_COST;
    }

    //This means the same as total_cost =total_cost + DELIVERY_COST;
    total_cost += DELIVERY_COST;

    printf("The total cost is $%.2f", total_cost);

    return 0;
}