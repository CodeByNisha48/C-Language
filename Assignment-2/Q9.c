//Write  a program to find the greatest among three given numbers. print number once if the greatest number appears two or three time

#include<stdio.h>
#include<conio.h>

int main(){
    int x, y, z;
    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);
    
    printf("Enter the third number: ");
    scanf("%d", &z);

    if(x >= y && x >= z){
        printf("greatest x");
    }
    else if(y >= z && y >= x){
        printf("greatest y");
    }
    else{
        printf("greatest c");
    }
    return 0;
}