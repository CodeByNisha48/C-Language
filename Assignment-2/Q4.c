// 4. Write a program to check whether a given number is an even number or an odd 
// number without using % operator.  

#include<stdio.h>
#include<conio.h>

int main() {
    int n;
    printf("Enter the nhumber: ");
    scanf("%d", &n);

    if((n&1) == 0){
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
}