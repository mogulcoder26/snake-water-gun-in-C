#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// my main program to use random number generator in C to create a project.
int main()
{
    int compturn, a;
    char userturn;
    while (2 > 1)
    {
        srand(time(0));
        compturn = rand() % 3 + 1;
        
        printf("Snake(s)/water(w)/gun(g)?:\n");
        scanf("%c", &userturn);

        if (userturn == 's')
        {
            a = 1;
        }
        else if (userturn == 'w')
        {
            a = 2;
        }
        else if (userturn == 'g')
        {
            a = 3;
        }

        else if (compturn == 1 && a == 1)
        {
            printf("tie!computer choosed %c\n", 's');
        }
        else if (compturn == 2 && a == 2)
        {
            printf("tie!computer choosed %c\n", 'w');
        }
        else if (compturn == 3 && a == 3)
        {
            printf("tie!computer choosed %c\n", 'g');
        }

        else if (compturn == 1 && a == 2)
        {
            printf("you lose computer choosed %c\n", 's');
        }
        else if (compturn == 1 && a == 3)
        {
            printf("You win computer choosed %c\n", 's');
        }
        else if (compturn == 2 && a == 1)
        {
            printf("you win computer choosed %c\n", 'w');
        }
        else if (compturn == 2 && a == 3)
        {
            printf("you lose computer choosed %c\n", 'w');
        }
        else if (compturn == 3 && a == 1)
        {
            printf("you lose computer choosed %c\n", 'g');
        }
        else if (compturn == 3 && a == 2)
        {
            printf("you win computer choosed %c\n", 'g');
        }
    }
    return 0;
}
//hitu was here lol xd
