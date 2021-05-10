//Carnival game program

#include <stdio.h>

int main(void)
{
    int bottles_knocked_down = 2, unicorn_size = 0;

    const int small = 3, medium = 2, large = 1;

    if (bottles_knocked_down >= 1 && bottles_knocked_down < 3)
    {
        unicorn_size = small;
        printf("You won a small unicorn (size %d)", unicorn_size);
    }

    else if (bottles_knocked_down >= 3 && bottles_knocked_down <= 5)
    {
        unicorn_size = medium;
        printf("You won a medium unicorn (size %d)", unicorn_size);
    }

    else if (bottles_knocked_down == 6)
    {
        unicorn_size = large;
        printf("You won a large unicorn (size %d)", unicorn_size);
    }

    else
    {
        printf("Try again!");
    }

    return 0;
}