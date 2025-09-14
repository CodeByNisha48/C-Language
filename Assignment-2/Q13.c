//13. Write a program to check whether a given number is divisible by 3 and divisible by2. 
#include<stdio.h>
#include<conio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(n%3 == 0 && n%2 == 0){
        printf("Number 2 and 3 both are divible");
    }
    else{
        printf("Number 2 and 3 both are not divible");
    }
}