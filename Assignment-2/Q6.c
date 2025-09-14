// 6. Write a program to print greater between two numbers. Print one number of both are 
// the same. 

#include<stdio.h>
#include<conio.h>

int main(){
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if(num1 > num2 ){
        printf("num1 is greater");
    }
    else if( num2 > num1){
        printf("num2 is greater");
    }
    else{
        printf("both number are same");
    }
    return 0;
}