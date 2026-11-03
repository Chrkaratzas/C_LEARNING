#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int get_code();
int discount_percentage(int code);
int product_points(int code, double price);


int main()
{
    double counter1 ; //einai o meetrhths tis telikis timhs
    double counter2 ; //einai o meetrhths tou posou ekptosis
    int counter3; //einai o metrhths ton podwn

    counter1 = counter2 = 0;
    double price;
    int points;


    while (true){
        int code = get_code();

        if (code == 0){
            break;
        }

        int precentage = discount_percentage(code);
        printf("Dwse thn timh: ");
        scanf("%lf", &price);
        counter2 = counter2 +  (double) precentage/100*price;
        counter1 = counter1 + (price - ((double) precentage/100*price));
        points = product_points(code, price - (double) precentage/100*price );
        counter3 = counter3 + points;




    }
    printf("-------------------\n");
    printf("Teliko synolo: %.2lf Euro\n", counter1);
    printf("Ekptwsh: %.2lf\n", counter2);
    printf("Pontoi: %d", counter3);

    return 0;
}





int get_code()
{
    int code;
    while (true){

        printf("Dwse kodiko: ");
        scanf("%d", &code);
        if (code >= 0 && code <= 2000){
            break;
        }
        else{
            printf("Lathos Kwdikos (0-2000)\n");
        }
    }
    return code;
}




int discount_percentage(int code)
{
    if (code>=1 && code<=300){
        return 5;
    }
    else if (code <= 500){
        return 10;
    }
    else if (code <= 1000){
        return 15;
    }
    else{
        return 20;
    }
}

int product_points(int code, double price)
{
    if (code>=1000 && code<=1500){
        return ceil(price/5);
    }
    else{
        return 1;
    }
}
