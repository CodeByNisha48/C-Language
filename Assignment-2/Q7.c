//. Write a program to check whether roots of a given quadratic equation are real & 
// distinct, real & equal or imaginary roots  

#include<stdio.h>
#include<conio.h>

int main() {
    int a , b, c, D;
    printf("enter the coefficient a: ");
    scanf("%d", &a);

    printf("enter the coefficient b: ");
    scanf("%d", &b);

    printf("enter the coefficient c: ");
    scanf("%d", &c);

    D = (b * b) - (4 * a * c);

    if(D > 0){
        printf(" are real & distinct");
    }
    else if(D == 0){
        printf("Roots are real & equal");
    }
    else if(D < 0){
        printf("Roots are imaginary");
    }
    else{
        printf("Roots are imaginary");
    }
    return 0;
}