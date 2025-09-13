//1. Write a program to check whether a given number is positive or non-positive.  
#include<stdio.h>
#include<conio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(n > 0){
        printf("Positive");
    }
    else{
        printf("non-Positive");
    }
}