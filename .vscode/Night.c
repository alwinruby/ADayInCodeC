//Backyard night

#include <stdio.h>

#define CLOUDY 0

void stargaze(void); //function declaration

int main(void)
{
    int sky = 1;

    if (sky != CLOUDY)
    {
        stargaze();
    }

    printf("Let's go back into the house now.");

    return 0;
}

void stargaze(void)
{
    int minutes = 1;

    do
    {
        minutes++;
        printf("We've looked at the sky for %d minutes. \n", minutes);
    } while (minutes < 10);
}