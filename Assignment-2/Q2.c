//2. Write a program to check whether a given number is divisible by 5 or not  

#include<stdio.h>
#include<conio.h>

int main() {
    int n;
    printf("Enter the nhumber: ");
    scanf("%d", &n);

    if(n%5 == 0){
        printf("Divisible by 5");
    }
    else{
        printf("Not divisible by 5");
    }
}