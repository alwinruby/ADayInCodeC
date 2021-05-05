//Wake up program

#include <stdio.h>

#define OFF 0
#define ON 1
#define AM 0
#define PM 1

int main(void)
{
    int clock_time = 8, time_of_day = 0, alarm;

    if (clock_time == 8 && time_of_day == AM)
    {
        alarm = ON;
        printf("It's 8 AM, wake up! Jump out of bed!");
    }

    else
    {
        alarm = OFF;
        printf("Sweet dreams...");
    }

    return 0;
}