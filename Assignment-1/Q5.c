//5. WAP to calculate the length of String using printf function.
#include<stdio.h>
#include<conio.h>

int main() {
    char str[50];
    int i = 0;

    printf("enter a string: ");
    scanf("%s", &str);

    while(str[i] != '\0'){
        i++;
    }
    printf("Length of string is: %d", i);
    return 0;
}



