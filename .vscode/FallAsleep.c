//Fall asleep program

#include <stdio.h>

int main(void)
{

    int unicorns = 0;

    //Count 5 unicorns with a for loop
    for (int count = 0; count < 5; count++)
    {
        unicorns = unicorns + 1;
    }

    printf("\n");

    printf("I counted %d unicorns and fell asleep ", unicorns);

    return 0;
}