#include <stdio.h>
/*Write a program that inputs an integer (int) and calculates the sum of all its positive divisors, excluding the number itself.*/
int main()
{
    int number,i,sum;
    sum = 0;

    printf("Num: ");
    scanf("%d",&number);

    for (i=1;i<number;i++)
    {
        if (number%i == 0){
            sum = sum + i;
        }
    }
    printf("Sum: %d", sum);
    return 0;
}
