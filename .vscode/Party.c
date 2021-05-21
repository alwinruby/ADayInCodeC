//Pizza party

#include <stdio.h>

int party(int pizzax_eaten);

int main(void)
{
    int extra_pizza = party(5); //Call the party function

    if (extra_pizza > 1)
    {
        printf("There are %d extra pizzas", extra_pizza);
    }

    else if (extra_pizza == 1)
    {
        printf("There is one extra pizza");
    }

    return 0;
}

int party(int pizzas_eaten)
{
    int pizzas_total = 6;
    int pizzas_left = pizzas_total - pizzas_eaten;
    return pizzas_left;
}