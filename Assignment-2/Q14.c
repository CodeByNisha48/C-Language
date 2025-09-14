//14. Write a program to check whether a given number is divisible by 7 or divisible by 3. 

#include<stdio.h>
#include<conio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(n%7 == 0 && n%3 == 0){
        printf("Number 7 and 3 both are divible");
    }
    else{
        printf("Number 7 and 3 both are not divible");
    }
}