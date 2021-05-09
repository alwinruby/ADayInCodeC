//Beach Program

#include <stdio.h>

#define OPEN 1
#define CLOSED 0

int main(void)
{
    int chip_bag = 1, cupcake_box = 1, kids_playing = 0;

    if (chip_bag == OPEN || cupcake_box == OPEN) //outer if statement
    {
        if (kids_playing) //inner if statement
        {
            printf("Seaguls are eating.");
        }
        else
        {
            printf("Watchng out for seaguls.");
        }
    }
    else
    {
        printf("Seaguls are not eating.");
    }

    return 0;
}