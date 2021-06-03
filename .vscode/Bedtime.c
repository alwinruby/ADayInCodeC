//Bedtime program

#include <stdio.h>

#define TRUE 1

void epic_test(int activities, int happy_value); //function prototypes

int epic_day = 0;

int main(void)
{
    int number_of_activites = 10, very_happy = 1;

    epic_test(number_of_activites, very_happy);

    if (epic_day == TRUE)
    {
        printf("What an epic day!\n");
    }

    char end_day[10] = {'G', 'o', 'o', 'd', 'n', 'i', 'g', 'h', 't', '\0'};
    printf("%s ", end_day);

    return 0;
}

void epic_test(int activities, int happy_value)
{
    if (activities > 5 && happy_value == 1)
    {
        epic_day = TRUE;
    }
}