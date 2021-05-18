//Biking home program
//Biking home to: 1 Maple Lane, Sunnyvale Florida 32004

#include <stdio.h>
#include <string.h>

int main(void)
{
    struct Address
    {
        int street_number;
        char street[100];
        char city[50];
        char state[14];
        int zip_code;
    };

    struct Address home;
    home.street_number = 1;
    strcpy(home.street, "Maple Lane");
    strcpy(home.city, "Sunnyvale");
    strcpy(home.state, "Florida");
    home.zip_code = 32004;

    printf("Bike home to: %d %s, %s, %s %d.", home.street_number, home.street, home.city, home.state, home.zip_code);

    return 0;
}