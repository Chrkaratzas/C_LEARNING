#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define COST 20000
#define normal_charge 350
#define less_charge 315

/* A travel agency processes daily ticket reservations for a trip that has a total fixed
cost of €20,000. The ticket price is €350 per person, but a 10% discount per person
is applied to groups of more than 10 people.*/

int main()
{
    int code,people;
    long gain,kerdos;
    kerdos = 0;

    while (true)
    {
        printf("Dwse kwdiko: ");
        scanf("%d", &code);
        if (code != 1 && code != 2){
            printf("Lathos\n");
        }
        else{
            if (code == 2){
                printf("Kerdos: %ld", kerdos - COST );
                break;
            }
            else{
                printf("Dwse arithmo atomwn: ");
                scanf("%d", &people);
                if (people>10){
                    gain = ceil(people*(less_charge));
                }
                else{
                    gain = people*(normal_charge);
                }
                printf("Kostos: %ld\n", gain);
                kerdos = kerdos + gain;

            }
        }
    }

    return 0;
}
