//Before the day began

#include <stdio.h>

int main(void)
{

    int game_choice = 4;

    switch (game_choice)
    {
    case 1:
        printf("Racing Game");
        break;

    case 2:
        printf("Air hockey");
        break;

    case 3:
        printf("Skeeball");
        break;

    case 4:
        printf("Pinball");
        break;

    default:
        printf("Any other arcade game");
    }

    return 0;
}