#include <stdio.h>
#include <stdbool.h>

bool IsArmstrong(int num);
int Sum_Cube(int num);
int cube(int num);


int main()
{
    for (int i = 1 ; i<=999 ; i++){
        if(IsArmstrong(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}

bool IsArmstrong(int num)
{
    if (num == Sum_Cube(num)){
        return true;
    }
    return false;
}

int Sum_Cube(int num)
{
    int x1 = (num/1) % 10;
    int x2 = (num/10) % 10;
    int x3 = (num/100) % 10;
    return cube(x1)+cube(x2)+cube(x3);
}

int cube(int num)
{
    int i;
    int number =1;

    for (i=0;i<3;i++){
        number *= num;
    }
    return number;
}
