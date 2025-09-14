// 8. Write a program to check whether a given year is a leap year or not.  

#include <stdio.h>
#include <conio.h>

int main() {
    int year;
    printf("Enter the Year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a Leap Year", year);
            }
            else {
                printf("%d is Not a Leap Year", year);
            }
        }
        else {
            printf("%d is a Leap Year", year);
        }
    }
    else {
        printf("%d is Not a Leap Year", year);
    }

    return 0;
}
