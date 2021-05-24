//Bowling program

#include <stdio.h>

int main(void)
{
    int player, bowl, frame;

    for (frame = 1; frame < 11; frame++) //Outer loop
    {
        for (player = 1; player < 5; player++) //Inner loop
        {
            bowl = 2;

            while (bowl > 0)
            {
                bowl--; //same as bowl = bowl -1
            }
            printf("Player %d is done with frame %d\n", player, frame);
        }
        printf("Done withe frame %d\n\n", frame);
    }
    return 0;
}