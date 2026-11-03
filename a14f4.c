#include <stdio.h>

int max(int n1,int n2);
int gr(int n1, int n2, int n3);


int main()
{
    int a, b, c ;
    double y ;

    printf("Dwse a: ");
    scanf("%d", &a);
    printf("Dwse b: ");
    scanf("%d", &b);
    printf("Dwse c: ");
    scanf("%d", &c);

    y = (double) (2*max(a,b) + 3*gr(a,b,c)) / 4;
    printf("y = %.2lf", y);



    return 0;
}

int max(int n1, int n2)
{
    if (n1>= n2){
        return n1;
    }
    else{
        return n2;
    }
}

int gr(int n1, int n2, int n3)
{
    int max = n1;
    if (n2 > max){
        max = n2;
    }
    if (n3 > max){
        max = n3;
    }
    return max;
}
