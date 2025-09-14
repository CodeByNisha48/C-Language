//5. Write a program to check whether a given number is a three-digit number or not.  

#include<stdio.h>
#include<conio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if((n >= 100 && n <= 999) || (n <= -100 && n >= -999)){
        printf("It is a three-digit number");
    }
    else{
        printf("It is not a three-digit number");
    }
    return 0;
}