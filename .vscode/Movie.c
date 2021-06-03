//Movie Night Program

#include <stdio.h>

int main(void)
{
    char movie_name[100];
    int minutes;

    printf("What movie do you want to watch?\n");

    /* Read a string input from the keyboard (stdin is standard input) 
    using the fgets() function that is  in the C Standard Library */

    fgets(movie_name, 100, stdin);
    printf("OK, lets watch %s", movie_name);

    printf("How many minutes does it take to make popcorn?\n");
    scanf("%d", &minutes);
    printf("Let's start the movie in %d minutes.\n", minutes);

    char movie_message[] = "Enjoy the show!";
    printf("%s", movie_message);

    return 0;
}