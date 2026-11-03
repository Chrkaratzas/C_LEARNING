#include <stdio.h>
#include <stdbool.h>
bool Valid_Time(int hours, int min, int sec);



int main()
{
    int hours, min, sec;
    printf("Dwse tis ores: ");
    scanf("%d", &hours);
    printf("Dwse ta lepta: ");
    scanf("%d", &min);
    printf("Dwse ta defterolepta: ");
    scanf("%d", &sec);
    if (Valid_Time(hours,min,sec)){
        printf("Valid: yes");
    }
    else{
        printf("Valid: no");
    }
    return 0;
}

bool Valid_Time(int hours, int min, int sec)
{
    if( (hours >=0 && hours <=23) && (min>=0 && min <= 59) && (sec>=0 && sec <= 59)){
        return true;
    }
    else{
        return false;
    }
}

