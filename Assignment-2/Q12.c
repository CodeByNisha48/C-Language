//12. Write a program to check whether a given alphabet is in uppercase or lowercase.  

#include<stdio.h>
#include<conio.h>

int main() {
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("Uppercase");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}