#include <stdio.h>

int pancakes[20] = {0}; //array declaration
int i, count = 0, timer = 0;

#define DONE 1

int main(void)
{
    for (i = 0; i < 20; i++)
    {
        count++; //increase count by 1
        timer = timer + 4;
        pancakes[i] = DONE;
        printf("Pancake %d is done (value of %d)\n", count, pancakes[i]);
    }

    printf("We made %d pancakes in %d minutes.", count, timer);

    return 0;
}